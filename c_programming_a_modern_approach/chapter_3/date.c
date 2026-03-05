/*
*Author: Leon Henning https://github.com/Leon-Henning-source
*Date: 05.03.2026
*Book: C Programming - A Modern Approach second edition by K. N. King
*Chapter: 3 - Formatted Input/Output
*Programming Project: 1
*Program Name: date
*Purpose: Write a program that accepts a date from the user in the
*form mm/dd/yyyy and then displays it in the form yyyymmdd.
*/

#include <stdio.h>

int main(void)
{
	printf("%s", "Enter a date (mm/dd/yyyy): ");
	int day_date, month_date, year_date;
	scanf("%d/%d/%d", &month_date, &day_date, &year_date);

	printf("%s%d%.2d%.2d\n", "You entered the date: ", year_date, month_date, day_date);

	return 0;
}