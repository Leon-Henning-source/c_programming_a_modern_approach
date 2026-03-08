/*
*Author: Leon Henning https://github.com/Leon-Henning-source
*Date: 08.03.2026
*Book: C Programming - A Modern Approach second edition by K. N. King
*Chapter: 3 - Formatted Input/Output
*Programming Project: 5
*Program Name: magic_square
*Purpose: Write a program that asks the user to enter the numbers
*from 1 to 16 (in any order) and then displays the numbers in 
*a 4 by 4 arrangement, followed by the sums of the rows, columns, 
*and diagonals:
16   3   2   13
5   10   11   8
9    6    7  12
4   15   14   1
Row sums: 34 34 34 34
Column sums: 34 34 34 34
Diagonal sums: 34 34
*If the row, column, and diagonal sums are all the same (as they
*are in this example), the numbers are said to form a magic square.
*The magic square shown here appears in a 1514 engraving by artist
*and mathematician Albrecht Duerer. (Note that the middle numbers
*in the last row give the date of the engraving.)
*/

#include <stdio.h>

int main(void)
{
	printf("%s", "Enter the numbers from 1 to 16 in any order: ");

	int num_1, num_2, num_3, num_4;
	int num_5, num_6, num_7, num_8;
	int num_9, num_10, num_11, num_12;
	int num_13, num_14, num_15, num_16;

	scanf("%d%d%d%d", &num_1, &num_2, &num_3, &num_4);
	scanf("%d%d%d%d", &num_5, &num_6, &num_7, &num_8);
	scanf("%d%d%d%d", &num_9, &num_10, &num_11, &num_12);
	scanf("%d%d%d%d", &num_13, &num_14, &num_15, &num_16);

	int row_1, row_2, row_3, row_4;
	int column_1, column_2, column_3, column_4;
	int diagonal_1, diagonal_2;

	row_1 = num_1 + num_2 + num_3 + num_4;
	row_2 = num_5 + num_6 + num_7 + num_8;
	row_3 = num_9 + num_10 + num_11 + num_12;
	row_4 = num_13 + num_14 + num_15 + num_16;

	column_1 = num_1 + num_5 + num_9 + num_13;
	column_2 = num_2 + num_6 + num_10 + num_14;
	column_3 = num_3 + num_7 + num_11 + num_15;
	column_4 = num_4 + num_8 + num_12 + num_16;

	diagonal_1 = num_1 + num_6 + num_11 + num_16;
	diagonal_2 = num_4 + num_7 + num_10 + num_13;

	printf("%s%2d %2d %2d %2d\n", "Row sums: ", row_1, row_2, row_3, row_4);
	printf("%s%2d %2d %2d %2d\n", "Column sums: ", column_1, column_2, column_3, column_4);
	printf("%s%2d %2d\n", "Diagonal sums: ", diagonal_1, diagonal_2);

	return 0;
}