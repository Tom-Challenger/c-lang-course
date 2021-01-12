#include <stdio.h>

int main();
int fibonacci(int arr[], int index, int number);

int main() {
	int i = 1; // Текущий элемент в ряду
	int n = 7; // Человеки думают что ряд начинается с 1го
	int arr[n-1];
	// 0 1 1 2 3 5 8
	// 1 2 3 4 5 6 7

	arr[0] = 0;
	arr[1] = 1;

	printf("%d", fibonacci(arr, i, n));

	return 0;
}

int fibonacci(int arr[], int index, int number) {
	printf("lvl: %d :: number: %d\n", index, arr[index]);
	if (index == number-1) {
		printf("lvl: %d :: return: %d\n", index, arr[index]);
		return arr[index];
	}
	index++;
	arr[index] = arr[index-1] + arr[index-2];
	return fibonacci(arr, index, number);
}