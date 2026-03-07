/*
*Author: Leon Henning https://github.com/Leon-Henning-source
*Date: 07.03.2026
*Book: C Programming - A Modern Approach second edition by K. N. King
*Chapter: 3 - Formatted Input/Output
*Programming Project: 3
*Program Name: isbn
*Purpose: Books are identified by an International Standard 
*Book Number (ISBN). ISBNs assigned after January 1. 2007
*contain 13 digits, arranged in five groups, such as
*978-0-393-97959-3. (Older ISBNs use 10 digits.)
*The first group (the GS1 prefix) is currently either
*978 or 979. The group identifier specifies the language or country
*of origin (for example, 0 and 1 are used in English-speaking countries).
*The publisher code identifies the publisher (393 is the code for
*W. W. Norton). The item number is assigned by the publisher to
*identify a specific book (97959 is the code for this book).
*An ISBN ends with a check digit that's used to verify the accuracy
*of the preceding digits. Write a program that breaks down an ISBN
*entered by the user. Note: The number of digits in each group may
*vary; you can't assume that groups have the lengths shown in this
*example. Test your program with actual ISBN values (usually found
*on the back cover of a book and on the copyright page).
*/

#include <stdio.h>

int main(void)
{
	printf("%s", "Enter ISBN: ");
	int gs1_prefix, group_identifier, publisher_code, item_number, check_digit;
	scanf("%d-%d-%d-%d-%d", &gs1_prefix, &group_identifier, &publisher_code, &item_number, &check_digit);

	printf("%s%d\n", "GS1 prefix: ", gs1_prefix);
	printf("%s%d\n", "Group identifier: ", group_identifier);
	printf("%s%d\n", "Publisher code: ", publisher_code);
	printf("%s%d\n", "Item number: ", item_number);
	printf("%s%d\n", "Check digit: ", check_digit);

	return 0;
}