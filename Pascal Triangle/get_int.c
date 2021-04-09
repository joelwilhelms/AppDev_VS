#include "pascal.h"

int get_int(int min, int max) {
	int t;
	do {
		printf("Enter a positive integer between (%d, %d): ", MIN, MAX);
		int r = scanf("%d", &t);
		if (r < 1) t = 0;
	} while (t < min || t > max);
	return t;
}