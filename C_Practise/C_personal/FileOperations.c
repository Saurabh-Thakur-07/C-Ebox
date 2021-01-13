// Removing a flat file using C commands 
#include<stdio.h>
int main()
{
	int output ; 
	output = remove("D:\\raj.txt"); // success of the command returns 0 to the outut variable while its failure would return -1
	if(output == 0 )
	{
		printf("Succesful Removal of the file \n");
		printf("The value of the output variable is %d", output);
	}
	else
	{
		printf("Unable to delete the file plz specify the correct loaction again or plz check whether the file is avaliable there or not \n");
		printf("The value of the output variable is %d" ,output); 
	}
}
