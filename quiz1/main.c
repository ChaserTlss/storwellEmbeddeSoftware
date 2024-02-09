#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "calcPaper.h"

int main(int argc, char *argv[]) {
	/* check input must be two positive integers */
	if (argc != 3) {
		printf("Usage: %s <positive integer> <positive integer>\n", argv[0]);
		return 1;
	}
	/* from input get two positive integers */
	int n = atoi(argv[1]);
	if (n <= 0) {
		printf("Error: %s is not a positive integer\n", argv[1]);
		return 1;
	}
	int m = atoi(argv[2]);
	if (m <= 0) {
		printf("Error: %s is not a positive integer\n", argv[2]);
		return 1;
	}

	int number = 0;
	int *result = calcPaper(n, m, &number);
	printf("Number of paper: %d\n", number);
	for (int i = 0; i < number; i++) {
		printf("%dx%d ", result[i], result[i]);
	}
	printf("\n");

	return 0;
}

