/*
*Author: Leon Henning https://github.com/Leon-Henning-source
*Date: 07.03.2026
*Book: C Programming - A Modern Approach second edition by K. N. King
*Chapter: 3 - Formatted Input/Output
*Programming Project: 2
*Program Name: product_info
*Purpose: Write a program that formats product information entered
*by the user. A session with the program should look like this:
*Enter item number: 583
*Enter unit price: 13.5
*Enter purchase date (mm/dd/yyyy): 10/24/2010
*Item		Unit		Purchase
*			Price		Date
*583		$  13.50	10/24/2010
*The item number and date should be left justified; the unit price
*should be right justified. Allow dollar amounts up to $9999.99.
*Hint: Use tabs to line up the columns.
*/

#include <stdio.h>

int main(void)
{
	printf("%s", "Enter item number: ");
	int user_item_number = 0;
	scanf("%d", &user_item_number);

	printf("%s", "Enter unit price: ");
	float user_unit_price = 0.0f;
	scanf("%f", &user_unit_price);

	printf("%s", "Enter purchase date (mm/dd/yyyy): ");
	int user_purchase_date_month = 0;
	int user_purchase_date_day = 0;
	int user_purchase_date_year = 0;
	scanf("%d/%d/%d", &user_purchase_date_month, &user_purchase_date_day, &user_purchase_date_year);

	printf("%s\n", "Item\t\tUnit\t\tPurchase");
	printf("%s\n", "\t\tPrice\t\tDate");
	printf("%-d\t\t$%7.2f\t%-d/%-d/%-d\n", user_item_number, user_unit_price, user_purchase_date_month, user_purchase_date_day, user_purchase_date_year);

	return 0;
}