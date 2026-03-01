/*
*Author: Leon Henning https://github.com/Leon-Henning-source
*Date: 01.03.2026
*Book: C Programming - A Modern Approach second edition by K. N. King
*Chapter: 2 - C Fundamentals
*Programming Project: 4
*Program Name: tax_calc
*Purpose: Write a program that asks the user to enter a 
*dollars-and-cents amount, then displays the amount with 5%
*tax added.
*/

#include <stdio.h>

int main(void)
{
	printf("%s", "Enter dollar and cent amount: ");
	float user_dollar_and_cent_amount = 0.0f;
	scanf("%f", &user_dollar_and_cent_amount);

	const int TAX_RATE = 5;
	float after_tax_amount = 0.0f;
	const int TO_PERCENTAGE = 100;
	after_tax_amount = TAX_RATE / user_dollar_and_cent_amount * TO_PERCENTAGE;

	float result = user_dollar_and_cent_amount + after_tax_amount;

	printf("%s%.2f\n", "With tax added: ", result);

	return 0;
}