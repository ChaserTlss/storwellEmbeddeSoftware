#include <stdio.h>
#include <stdlib.h>

#include "calcPaper.h"

int test_case_1() {
	unsigned int N = 6;
	unsigned int M = 5;
	const int colden_count = 6;
	int colden_result[colden_count] = {5, 1, 1, 1, 1, 1};

	int numbers = 0;
	int *result = calcPaper(N, M, &numbers);

	if (numbers != colden_count) {
		printf("Test case 1 failed: numbers != colden_count\n");
		return 1;
	}

	for (int i = 0; i < numbers; i++) {
		if (result[i] != colden_result[i]) {
			printf("Test case 1 failed: result[%d] != colden_result[%d]\n", i, i);
			return 1;
		}
	}

	return 0;

}

int main() {
	if (test_case_1() == 0) {
		printf("All test cases passed\n");
	}
	return 0;
}
