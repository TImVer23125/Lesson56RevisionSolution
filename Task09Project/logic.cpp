// Task 09 [The sum VI]
// Сумма
//
// Необходимо спроектировать и реализовать программу, 
// которая вычисляет сумму цифр заданного числа, кратных 5
#include "logic.h"

int recursion(int number) {
	if (number == 0) {
		return 0;
	}

	int digit = number % 10;

	return recursion(number / 10) + (digit % 5 == 0 ? digit : 0);
}

int sum(int number){
	number = number < 0 ? -number : number;

	return recursion(number);
}