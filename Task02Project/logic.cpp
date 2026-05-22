// Task 02 [The Fibonacci number]
// Число Фибоначчи
// 
// Необходимо спроектировать и реализовать программу, 
// которая находит n-ное число в последовательности 
// ряда Фибоначчи с другим началом, где первые два числа равны 1,
// а каждое следующее – сумме двух предыдущих: 1, 1, 2, 3, 5, 8, 13, …

#include "logic.h"

int recursion(int index) {
	if (index <= 4) {
		return index - 1;
	}

	return recursion(index - 1) + recursion(index - 2);
}

int fibonacci(int index){
	if (index < 2) {
		return index;
	}

	return recursion(index);
}