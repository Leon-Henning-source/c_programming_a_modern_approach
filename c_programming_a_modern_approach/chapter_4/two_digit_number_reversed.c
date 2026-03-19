/*
*Author: Leon Henning https://github.com/Leon-Henning-source
*Date: 19.03.2026
*Book: C Programming - A Modern Approach second edition by K. N. King
*Chapter: 4 - Expressions
*Programming Project: 1
*Program Name: two_digit_number_reversed
*Purpose: Write a program that asks the user to enter a two-digit
*number, then prints the number with its digits reversed. 
*A session with the program should have the following appearance:
*Enter a two-digit number: 28
*The reversal is: 82
*Read the number using %d, then break it into two digits.
*Hint: If n is an integer, then n % 10 is the last digit in n
*and n / 10 is n with the last digit removed.
*/

#include <stdio.h>

int main(void)
{
	printf("%s", "Enter a two-digit number: ");
	int user_number = 0;
	scanf("%d", &user_number);

	int first_digit_reversed = 0;
	int second_digit_reversed = 0;

	first_digit_reversed = user_number % 10;
	second_digit_reversed = user_number / 10;

	printf("%s%d%d\n", "The reversal is: ", first_digit_reversed, second_digit_reversed);

	return 0;
}