/*
*Author: Leon Henning https://github.com/Leon-Henning-source
*Date: 19.03.2026
*Book: C Programming - A Modern Approach second edition by K. N. King
*Chapter: 4 - Expressions
*Programming Project: 3
*Program Name: three_digit_reversed_mod
*Purpose: Rewrite the program in Programming Project 2 so that it
*prints the reversal of a three-digit number without using 
*arithmetic to split the number into digits. Hint: See the
*upc.c program of Section 4.1.
*/

#include <stdio.h>

int main(void)
{
	printf("%s", "Enter a three-digit number: ");
	int first_digit = 0;
	int middle_digit = 0;
	int last_digit = 0;
	scanf("%1d%1d%1d", &first_digit, &middle_digit, &last_digit);

	printf("%s%d%d%d\n", "The reversal is: ", last_digit, middle_digit, first_digit);

	return 0;
}