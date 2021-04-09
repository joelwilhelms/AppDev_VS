#include "pascal.h"

void pascal_triangle(int row) {
	int i, j;
	for (i = 0; i < row; i++) {
		// some spaces to make an equal-lateral triangle
		for (j = 0; j <= i; j++) {
			printf("%4d", comb(i, j));
		}
		printf("\n");
	}
}

int comb(int n, int m) {
	if (n < m) return 0;
	return fact(n) / (fact(m) * fact(n-m));
}

int fact(int n) {
	if (n == 0) return 1;
	int p = 1;
	for (int i = 2; i <= n; i++) {
		p = p*i;
	}
	return p;
}