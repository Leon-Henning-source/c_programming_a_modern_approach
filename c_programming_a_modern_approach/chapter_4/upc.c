/*
*Author: Leon Henning https://github.com/Leon-Henning-source
*Date: 20.03.2026
*Book: C Programming - A Modern Approach second edition by K. N. King
*Chapter: 4 - Expressions
*Programming Project: 5
*Program Name: upc
*Purpose: Rewrite the upc.c program of Section 4.1 so that the 
*user enters 11 digits at one time, instead of entering one digit,
*then five digits, and then another five digits.
*/

#include <stdio.h>

int main(void)
{
	int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5,
		first_sum, second_sum, total;

	printf("%s", "Enter upc: ");
	scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &d, &i1, &i2, &i3, 
		&i4, &i5, &j1, &j2, &j3, &j4, &j5);

	first_sum = d + i2 + i4 + j1 + j3 + j5;
	second_sum = i1 + i3 + i5 + j2 + j4;
	total = 3 * first_sum + second_sum;

	int check_digit = 0;
	check_digit = 9 - ((total - 1) % 10);
	printf("%s%d\n", "Check digit: ", check_digit);

	return 0;
}