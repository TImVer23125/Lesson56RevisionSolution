// Task 03 [The sum II]
// Сумма 
// 
// Необходимо спроектировать и реализовать программу, 
// которая вычисляет сумму чисел от N до M.

#include "logic.h"

int recursion(int n, int m) {
	if (m == n) {
		return n;
	}

	return recursion(n, m - 1) + m;
}

int sum(int n, int m) {
	if (n > m) {
		int t = n;
		n = m;
		m = t;
	}

	return recursion(n, m);
}