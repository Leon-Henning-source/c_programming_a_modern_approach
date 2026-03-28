/*
*Author: Leon Henning https://github.com/Leon-Henning-source
*Date: 25.03.2026
*Book: C Programming - A Modern Approach second edition by K. N. King
*Chapter: 5 - Selection Statements
*Programming Project: 1
*Program Name: check_digit_amount
*Purpose: Write a program that calculates how many digits a number
*contains: Enter a number: 374
*The number 374 has 3 digits
*You may assume that the number has no more than four digits.
*Hint: Use if statements to test the number. For example,
*if the number is between 0 and 9, it has one digit.
*If the number is between 10 and 99, it has two digits.
*/

#include <stdio.h>

int main(void)
{
	printf("%s", "Enter a number: ");
	int user_number = 0;
	scanf("%d", &user_number);

	const int SINGLE_DIGIT = 1;
	const int TWO_DIGIT = 2;
	const int THREE_DIGIT = 3;
	const int FOUR_DIGIT = 4;

	int digit_amount = 0;

	if(user_number >= 0 && user_number <= 9)
	{
		digit_amount = SINGLE_DIGIT;
	}
	else if(user_number >= 10 && user_number  <= 99)
	{
		digit_amount = TWO_DIGIT;
	}
	else if(user_number >= 100 && user_number <= 999)
	{
		digit_amount = THREE_DIGIT;
	}
	else
	{
		digit_amount = FOUR_DIGIT;
	}

	printf("%s%d%s%d%s\n", "The number ", user_number, " has ", digit_amount, " digits");

	return 0;
}