/*
*Author: Leon Henning https://github.com/Leon-Henning-source
*Date: 05.03.2026
*Book: C Programming - A Modern Approach second edition by K. N. King
*Chapter: 3 - Formatted Input/Output
*Exercise: 6
*Program Name: addfrac
*Purpose: Show how to modify the addfrac.c program of Section 3.2
*so that the user is allowed to enter fractions that contain
*spaces before and after each / character.
*/

#include <stdio.h>

int main(void)
{
	//Adds two fractions
	int num_1, denom_1, num_2, denom_2, result_num, result_denom;

	printf("%s", "Enter first fraction: ");
	scanf("%d / %d", &num_1, &denom_1);

	printf("%s", "Enter second fraction: ");
	scanf("%d / %d", &num_2, &denom_2);

	result_num = num_1 * denom_2 + num_2 * denom_1;
	result_denom = denom_1 * denom_2;

	printf("The sum is %d/%d\n", result_num, result_denom);

	return 0;
}