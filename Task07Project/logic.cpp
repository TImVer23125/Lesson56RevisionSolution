// Task 07 [The number of odd digits]
// Количество нечётных цифр
//
// Необходимо спроектировать и реализовать программу, 
// которая считает количество нечётных цифр
// в заданном целом числе.

// f(123456) --> f(12345) + 0
// f(12345) --> f(1234) + 1 

#include "logic.h"

int recursion(int number) {
	if (number == 0) {
		return 0;
	}

	int digit = number % 10;

	return recursion(number / 10) + (digit % 2 == 1 ? 1 : 0);
}

int count_of_odd_digits(int number) {
	number = number < 0 ? -number : number;

	return recursion(number);
}