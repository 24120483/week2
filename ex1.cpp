#include <iostream>
using namespace std;

int LinearSearch(int arr[], int n, int k) {
	for (int i = 0; i < n; i++) {
		if (arr[i] == k) {
			return i;
		}
	}
	return -1;
}
int main() {
	int n, k;
	cin >> n;
	int* a = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	cin >> k;
	cout << LinearSearch(a, n, k);
	delete a;
	return 0;
}