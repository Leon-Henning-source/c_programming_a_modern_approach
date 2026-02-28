/*
*Author: Leon Henning https://github.com/Leon-Henning-source
*Date: 28.02.2026
*Book: C Programming - A Modern Approach second edition by K. N. King
*Chapter: 2 - C Fundamentals
*Programming Project: 2
*Program Name: sphere_volume_calc
*Purpose: Write a program that computes the volume of a sphere
*with a 10-meter radius, using the formula v = 4/3PIr^3.
*Write the fraction 4/3 as 4.0f / 3.0f (Try writing it as 
*4/3. What happens?) Hint: C doesn't have an exponentiation
*operator, so you'll need to multiply r by itself twice
*to to compute r^3.
*/

#include <stdio.h>

int main(void)
{
	int user_radius_input = 10;
	int radius_exponent_calculation = user_radius_input * user_radius_input *user_radius_input;
	const float PI = 3.14159f;
	
	float sphere_volume = (4.0f / 3.0f) * PI * radius_exponent_calculation;

	printf("%s%.2f", "Sphere volume: ", sphere_volume);

	return 0;
}