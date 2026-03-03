/*
*Author: Leon Henning https://github.com/Leon-Henning-source
*Date: 03.03.2026
*Book: C Programming - A Modern Approach second edition by K. N. King
*Chapter: 3 - Formatted Input/Output
*Exercise: 3
*Program Name: different_format_strings
*Purpose: For each of the following pairs of scanf format strings,
*indicate whether or not the two strings are equivalent.
*If they're not, show how they can be distinguished.
*(a) "%d" versus " %d". (b) "%d-%d-%d" versus "%d -%d -%d".
*(c) "%f" versus "%f ". (d) "%f,%f" versus "%f, %f".
*/

#include <stdio.h>

int main(void)
{
	//(a) is equal
	//(b) is not equal, first takes only one input before scanf
	//returns, second takes two input before returning again,
	//both cases fail.
	//(c) is not equal, second case asks for meaningless second input.
	//(d) is equal
	int number_1 = 0;
	int number_2 = 0;
	int number_3 = 0;

	float x = 0.0f;
	float y = 0.0f;

	scanf("%f, %f", &x, &y);
	printf("%f%f\n", x, y);
	return 0;
}