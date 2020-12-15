#include <stdio.h>
#include <math.h>

int main() {
	// Limits
	double leftSide = -6;
	double rightSide = 6;
	double step = 0.3;

	// Define points
	double divResult = (rightSide - leftSide) / step;
	double remResult = fmod((rightSide - leftSide), step);
	// Get integer part
	int pointsCount = ceil(divResult);
	// !!
	if (remResult > 0) {
		pointsCount++;
	}

	// Create array
	double x = leftSide;
	double y[pointsCount];

	// Max element
	double max = 0;

	// Mean
	double meanSum = 0;
	double meanCount = 0;

	for (int i = 0; i <= pointsCount; i++) {
		y[i] = 5 * cos(2 * x);

		// Max element
		if ((i % 2) == 0) {
			if (max < y[i]) {
				max = y[i];
			}
		}

		// Mean
		if (y[i] < 0) {
			meanSum += y[i];
			meanCount++;
		}

		// Debug
		printf("i[%d] y[%f]= %f\n", i, x, y[i]);
		printf("-----------------------------");

		// Next step
		x += 0.3;
	}

	// Result for max element
	printf("%f\n", max);

	// Result for mean
	printf("%f\n", (meanSum / meanCount));

	return 0;
}