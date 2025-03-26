#include <iostream>
using namespace std;
int TimGTNN(int arr[], int n) {
	int low = 0, high = n - 1;
	while (low < high) {
		int mid = low + (high - low) / 2;
		if (arr[mid] >arr[high]) {
			low = mid + 1;
		}
		else {
			high = mid;
		}
	}
	cout << arr[low] << endl;
	return low;
}
int main() {
	int n;
	cin >> n;
	int* a = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int k = TimGTNN(a, n);
	cout << "Explanation: The original array was [";
	for (int i = 0; i < n; i++) {
		if (i != n - 1) {
			cout << a[i] << ",";
		}
		else {
			cout << a[i];
		}
	}
	cout << "] rotated " << k << " times." << endl;
	delete a;
	return 0;
}