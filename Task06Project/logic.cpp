// Task 06 [The sum III]
// Сумма
//
// Необходимо спроектировать и реализовать программу, 
// которая вычисляет сумму чётных чисел от 1 до N.

#include "logic.h"


int recursion(int number) {
	if (number < 2) {
		return 0;
	}

	return recursion(number - 2) + number;
}

int sum(int number) {
	if (number < 0) {
		return -1;
	}

	if (number % 2 == 1)
	{
		number--;
	}

	return recursion(number);
}