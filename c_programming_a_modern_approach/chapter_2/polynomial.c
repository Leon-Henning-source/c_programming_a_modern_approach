/*
*Author: Leon Henning https://github.com/Leon-Henning-source
*Date: 01.03.2026
*Book: C Programming - A Modern Approach second edition by K. N. King
*Chapter: 2 - C Fundamentals
*Programming Project: 5
*Program Name: polynomial
*Purpose: Write a program that asks the user to enter a 
*value for x and then displays the value of the
*following polynomial:
*3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6
*Hint: C doesn't have a exponentiation operator, so you'll need to
*multiply x by itself repeatedly in order to compute the powers
*of x. (For example, x * x * x is x cubed).
*/

#include <stdio.h>

int main(void)
{
	printf("%s", "Enter value for x: ");
	int x = 0;
	scanf("%d", &x);

	int x_power_5 = x * x * x * x * x;
	int x_power_4 = x * x * x * x;
	int x_power_3 = x * x * x;
	int x_power_2 = x * x;

	int polynomial_step_1 = 3 * x_power_5;
	int polynomial_step_2 = 2 * x_power_4;
	int polynomial_step_3 = 5 * x_power_3;
	int polynomial_step_4 = x_power_2;
	int polynomial_step_5 = 7 * x;
	int polynomial_step_6 = 6;

	int full_result = polynomial_step_1 + polynomial_step_2 - polynomial_step_3 - polynomial_step_4 + polynomial_step_5 - polynomial_step_6;

	printf("%s%d\n", "Polynomial result: ", full_result);

	int second_polynomial_result = 0;
	second_polynomial_result = ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6;

	printf("%s%d\n", "Second polynomial result: ", second_polynomial_result);

	return 0;
}