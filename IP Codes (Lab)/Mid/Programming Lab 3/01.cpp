/*
Initialising byte array with decimal, octal and hexadecimal numbers in C++
Here, we are going to learn how to declare a byte array and initialize an array with
decimal, octal and hexadecimal numbers in C++language.
*/
#include <stdio.h>

int main()
{
	//declaring array, initialising with decimal values	
	unsigned char arr1[]={10, 20, 30, 40, 50};
	//declaring array, initialising with octal values	
	unsigned char arr2[]={010, 077, 023, 045, 057};		
	//declaring array, initialising with hexadecimal values	
	unsigned char arr3[]={0x10, 0xAA, 0x67, 0xA1, 0xFF};	
	int i;
	
	//printing the numbers
	printf("arr1...\n");
	for(i=0; i<5; i++)
		printf("%d ",arr1[i]);
	printf("\n");

	//printing the numbers
	printf("arr2...\n");
	for(i=0; i<5; i++)
		printf("%o ",arr2[i]);
	printf("\n");
	
	//printing the numbers
	printf("arr3...\n");
	for(i=0; i<5; i++)
		printf("%X ",arr3[i]);	
	printf("\n");
	
	return 0;	
}