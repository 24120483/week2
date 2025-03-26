#include <iostream>
using namespace std;
int sentinelLinearSearch(int arr[], int n, int k) {
	int temp = arr[n - 1];
	arr[n - 1] = k;
	int i = 0;
	while (arr[i] != k) {
		i++;
	}
	arr[n - 1] = temp;
	if (i < n - 1 || arr[n - 1] == k) {
		return i;
	}
	else return -1;
}
int main() {
	int n, k;
	cin >> n;
	int* a = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	cin >> k;
	cout << sentinelLinearSearch(a, n, k);
	delete a;
	return 0;
}