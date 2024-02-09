#include <stdlib.h>

#define MAX(a, b) ((a) > (b) ? (a) : (b))

int *calcPaper(unsigned int N, unsigned int M, int *numbers) {
	int *result = NULL;
	unsigned int longest = MAX(N, M);
	unsigned int shortest = (N + M) - longest;
	unsigned long long area = N * M;
	unsigned int consumed_area = 0;

	/* initialize */
	*numbers = 0;
	result = (int *)malloc(sizeof(int) * MAX(N, M)); // The max size is the longest side
	if (result == NULL) {
		return NULL;
	}

	for (*numbers = 0; *numbers < MAX(N, M) && consumed_area < area; (*numbers)++) {
		const unsigned int side = shortest;
		const int n = longest - side;
		const int m = side;
		result[*numbers] = side;
		consumed_area += side * side;
		longest = MAX(n, m);
		shortest = (n + m) - longest;
	}

	return result;
}

