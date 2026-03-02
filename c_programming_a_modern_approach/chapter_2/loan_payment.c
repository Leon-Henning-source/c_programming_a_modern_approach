/*
*Author: Leon Henning https://github.com/Leon-Henning-source
*Date: 02.03.2026
*Book: C Programming - A Modern Approach second edition by K. N. King
*Chapter: 2 - C Fundamentals
*Programming Project: 8
*Program Name: loan_payment
*Purpose: Write a program that calculates the remaining balance
*on a loan after the first, second, and third monthly payments.
*Display each balance with two digits after the decimal point.
*Hint: Each month, the balance is decreased by the amount of
*the payment, but increased by the balance times the monthly
*interest rate. To find the monthly interest rate, convert
*the interest rate entered by the user to a percentage
*and divide it by 12.
*/

#include <stdio.h>

int main(void)
{
	printf("%s", "Enter amount of loan: ");
	float user_loan = 0.0f;
	scanf("%f", &user_loan);

	printf("%s", "Enter interest rate: ");
	float user_interest_rate = 0.0f;
	scanf("%f", &user_interest_rate);

	printf("%s", "Enter monthly payment: ");
	float user_monthly_payment = 0.0f;
	scanf("%f", &user_monthly_payment);


	float interest_rate_percentage = user_interest_rate / 100;
	const int MONTHS_IN_YEAR = 12;	
	float monthly_interest_rate = interest_rate_percentage / MONTHS_IN_YEAR;

	float current_loan_balance = 0.0f;
	//First loan payment
	current_loan_balance = user_loan - user_monthly_payment;
	current_loan_balance += user_loan * monthly_interest_rate;
	printf("%s%.2f\n", "Balance remaining after first payment: ", current_loan_balance);

	//Second loan payment
	current_loan_balance += current_loan_balance * monthly_interest_rate;
	current_loan_balance -= user_monthly_payment;
	printf("%s%.2f\n", "Balance remaining after second payment: ", current_loan_balance);

	//Third loan payment
	current_loan_balance += current_loan_balance * monthly_interest_rate;
	current_loan_balance -= user_monthly_payment;
	printf("%s%.2f\n", "Balance remaining after third payment: ", current_loan_balance);

	return 0;
}