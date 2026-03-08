/*
*Author: Leon Henning https://github.com/Leon-Henning-source
*Date: 08.03.2026
*Book: C Programming - A Modern Approach second edition by K. N. King
*Chapter: 3 - Formatted Input/Output
*Programming Project: 6
*Program Name: addfrac_modified
*Purpose: Modify the addfrac.c program of Section 3.2 so that the
*user enters both fractions at the same time, separated 
*by a plus sign.
*/

#include <stdio.h>

int main(void)
{
	//Adds two fractions
	printf("%s\n", "Enter two fractions separated by a plus sign: ");
	int num_1, denom_1, num_2, denom_2, result_num, result_denom;
	scanf("%d/%d+%d/%d", &num_1, &denom_1, &num_2, &denom_2);
	
	result_num = num_1 * denom_2 + num_2 * denom_1;
	result_denom = denom_1 * denom_2;

	printf("The sum is %d/%d\n", result_num, result_denom);

	return 0;
}