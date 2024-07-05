#include <iostream>

using namespace std;


void count_numbers(int arr[], int n, int& pos, int& neg, int& zero)
{
	pos = 0;
	neg = 0;
	zero = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] > 0) {
			pos++;
		}
		else if (arr[i] < 0) {
			neg++;
		}
		else {
			zero++;
		}
	}
}

int main() {
	const int n = 10;
	int arr[n] = { 4, -6, 2, 0, -1, 0, 7, -8, 3, 0 };
	int pos, neg, zero;

	count_numbers(arr, n, pos, neg, zero);

	cout << "Number of positive elements: " << pos << endl;
	cout << "Number of negative elements: " << neg << endl;
	cout << "Number of zero elements: " << zero << endl;

	return 0;
}