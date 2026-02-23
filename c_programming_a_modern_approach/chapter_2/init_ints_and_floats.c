/*
*Author: Leon Henning https://github.com/Leon-Henning-source
*Date: 23.02.2026
*Book: C Programming - A Modern Approach second edition by K. N. King
*Chapter: 2
*Exercise: 4
*Program Name: init_ints_and_floats
*Purpose: Write a program that declares several int and float
*variables - without initializing them - and then prints their
*values. Is there any pattern to the values? (Usually
*there isn't.)
*/

#include <stdio.h>

int main(void)
{
	int number, amount, count;
	float cash, celsius, speed;

	// No pattern, random garbage values on each execution
	// of object code

	printf("Ints: %d %d %d\n", number, amount, count);
	printf("Floats: %f %f %f\n", cash, celsius, speed);

	return 0;
}