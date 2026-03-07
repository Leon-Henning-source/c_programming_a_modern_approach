/*
*Author: Leon Henning https://github.com/Leon-Henning-source
*Date: 07.03.2026
*Book: C Programming - A Modern Approach second edition by K. N. King
*Chapter: 3 - Formatted Input/Output
*Programming Project: 4
*Program Name: telephone_number
*Purpose: Write a program that prompts the user to enter a 
*telephone number in the form (xxx) xxx-xxxx and then displays
*the number in the form xxx.xxx.xxx.
*/

#include <stdio.h>

int main(void)
{
	printf("%s", "Enter phone number [(xxx) xxx-xxxx]: ");
	int num_1, num_2, num_3;
	scanf("(%d)%d-%d", &num_1, &num_2, &num_3);

	printf("You entered %d.%d.%d\n", num_1, num_2, num_3);

	return 0;
}