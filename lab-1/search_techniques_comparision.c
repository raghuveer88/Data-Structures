#include <stdio.h>

int TernarySearchComp(int arr[], int n, int wanted_search) {
	int low = 0, high = n - 1;
	int count = 0;

	while (low <= high) {
		int left_mid = low + (high - low) / 3;
		int right_mid = high - (high - low) / 3;

		if (arr[left_mid] == wanted_search)
			return count;

		else if (arr[right_mid] == wanted_search)
			return count;

		else if (arr[left_mid] > wanted_search) {
			count++;
			high = left_mid - 1;
		}
		else if (arr[right_mid] < wanted_search) {
			count++;
			low = right_mid + 1;
		}
		else {
			count++;
			low = left_mid + 1, high = right_mid - 1;
		}
	}

	return count;
}

int BinarySearchComp(int *arr, int N, int wantedSearch) {
	int low = 0;
	int high = N - 1, mid;
	int count = 0;
	while (low < high) {
		count++;
		mid = (high - low) / 2;
		if (arr[mid] == wantedSearch) {
			low = high;
			return count;
		}
		else if (arr[mid] < wantedSearch) {
			low = mid;
		}
		else {
			high = mid;
		}
	}
	return count;
}

int LinearSearchComp(int arr[], int N, int wantedSearch) {
	int count = 0;
	for (int i = 0; i < N; i++) {
		count++;
		if (arr[i] == wantedSearch) {
			return count;
		}
	}
	return count;
}

int main() {
	int arr[9] = { 10,20,30,40,50,60,70,80,90 };

	int wanted = 10;

	printf("The no of comparisions in linear search are: %d\n", LinearSearchComp(arr, 9, wanted));
	printf("The no of comparisions in binary  search are: %d\n", BinarySearchComp(arr, 9, wanted));
	printf("The no of comparisions in ternary search are: %d\n", TernarySearchComp(arr, 9, wanted));

	printf("\n");


	return 0;
}