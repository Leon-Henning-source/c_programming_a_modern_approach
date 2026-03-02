/*
*Author: Leon Henning https://github.com/Leon-Henning-source
*Date: 02.03.2026
*Book: C Programming - A Modern Approach second edition by K. N. King
*Chapter: 2 - C Fundamentals
*Programming Project: 7
*Program Name: dollars_to_bills
*Purpose: Write a program that asks the user to enter a U.S. dollar
*amount and then shows how to pay that amount using the smallest
*number of $20, $10, $5, and $1 bills.
*Hint: Divide the amount by 20 to determine the number of 
*$20 bills needed, and then reduce the amount by the total
*value if the $20 bills. Repeat for the other bill sizes.
*Be sure to use integer values throughout, not
*floating-point numbers.
*/

#include <stdio.h>

int main(void)
{
	printf("%s", "Enter dollar amount: ");
	int user_dollars = 0;
	scanf("%d", &user_dollars);

	const int DOLLAR_BILL_20 = 20;
	const int DOLLAR_BILL_10 = 10;
	const int DOLLAR_BILL_5 = 5;
	const int DOLLAR_BILL_1 = 1;

	int dollar_bill_20_amount = 0;
	int dollar_bill_10_amount = 0;
	int dollar_bill_5_amount = 0;
	int dollar_bill_1_amount = 0;

	printf("\nUser dollars: $%d\n", user_dollars);

	dollar_bill_20_amount = user_dollars / DOLLAR_BILL_20;
	user_dollars -= dollar_bill_20_amount * DOLLAR_BILL_20;

	dollar_bill_10_amount = user_dollars / DOLLAR_BILL_10;
	user_dollars -= dollar_bill_10_amount * DOLLAR_BILL_10;

	dollar_bill_5_amount = user_dollars / DOLLAR_BILL_5;
	user_dollars -= dollar_bill_5_amount * DOLLAR_BILL_5;

	dollar_bill_1_amount = user_dollars / DOLLAR_BILL_1;
	user_dollars -= dollar_bill_1_amount * DOLLAR_BILL_1;

	printf("%s%d\n", "$20 bills: ", dollar_bill_20_amount);
	printf("%s%d\n", "$10 bills: ", dollar_bill_10_amount);
	printf("%s%d\n", "$5 bills: ", dollar_bill_5_amount);
	printf("%s%d\n", "$1 bills: ", dollar_bill_1_amount);

	return 0;
}