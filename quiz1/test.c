#include <stdio.h>
#include <stdlib.h>

#include "calcPaper.h"

#define check_result(number, result, colden_count, colden_result) \
	do { \
		if (number != colden_count) { \
			printf("Test case failed: number != colden_count\n"); \
			return 1; \
		} \
		for (int i = 0; i < number; i++) { \
			if (result[i] != colden_result[i]) { \
				printf("%s failed:[%d] result[%d] != colden_result[%d]\n", __func__, i, result[i], colden_result[i]); \
				return 1; \
			} \
		} \
		free(result); \
		return 0; \
	} while (0)

int test_case_1() {
	unsigned int N = 6;
	unsigned int M = 5;
	const int colden_count = 6;
	int colden_result[colden_count] = {5, 1, 1, 1, 1, 1};

	int numbers = 0;
	int *result = calcPaper(N, M, &numbers);

	check_result(numbers, result, colden_count, colden_result);
}

int test_case_2() {
	unsigned int N = 1;
	unsigned int M = 1;
	const int colden_count = 1;
	int colden_result[colden_count] = {1};

	int numbers = 0;
	int *result = calcPaper(N, M, &numbers);

	check_result(numbers, result, colden_count, colden_result);
}

int test_case_3() {
	unsigned int N = 9;
	unsigned int M = 9;
	const int colden_count = 1;
	int colden_result[colden_count] = {9};

	int numbers = 0;
	int *result = calcPaper(N, M, &numbers);

	check_result(numbers, result, colden_count, colden_result);
}

int test_case_4() {
	unsigned int N = 8;
	unsigned int M = 3;
	const int colden_count = 5;
	int colden_result[colden_count] = {3, 3, 2, 1, 1};

	int numbers = 0;
	int *result = calcPaper(N, M, &numbers);

	check_result(numbers, result, colden_count, colden_result);
}

int test_case_5() {
	unsigned int N = 0;
	unsigned int M = 3;
	const int colden_count = 0;
	int colden_result[colden_count] = {};

	int numbers = 0;
	int *result = calcPaper(N, M, &numbers);

	check_result(numbers, result, colden_count, colden_result);
}

int main() {
	if (test_case_1() == 0) {
		printf("test case 1 passed\n");
	}

	if (test_case_2() == 0) {
		printf("test case 2 passed\n");
	}

	if (test_case_3() == 0) {
		printf("test case 3 passed\n");
	}

	if (test_case_4() == 0) {
		printf("test case 4 passed\n");
	}

	if (test_case_5() == 0) {
		printf("test case 5 passed\n");
	}
	return 0;
}
