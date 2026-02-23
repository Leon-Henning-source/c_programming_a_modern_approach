/*
*Author: Leon Henning https://github.com/Leon-Henning-source
*Date: 23.02.2026
*Book: C Programming - A Modern Approach second edition by K. N. King
*Chapter: 2 - C Fundamentals
*Exercise: 3
*Program Name: dweight
*Purpose: Condense the dweight.c program by (1) replacing the
*assignments to height, length, and width with initializers and
*(2) removing the weight variable, instead calculating
*(volume + 165) / 166 within the last printf.
*/

//Computes the dimensional weight of a 12" x 10" x 8" box
#include <stdio.h>

int main(void)
{
	int height = 8; 
	int length = 12;
	int width = 10;
	int volume = height * length * width;

	printf("Dimensions: %dx%dx%d\n", length, width, height);
	printf("Volume (cubic inches): %d\n", volume);
	printf("Dimensional weight (pounds): %d\n", (volume + 165) / 166);

	return 0;
}