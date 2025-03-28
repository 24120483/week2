#include <iostream>
using namespace std;

int Tim2PhanTu(int arr[],int n, int k) {
	int low = 0, high = n - 1;
	while (low < high) {
		if ((arr[low] + arr[high]) == k) {
			return 1;
		}
		else if ((arr[low] + arr[high]) < k) {
			low++;
		}
		else {
			high--;
		}
	}
	return 0;
}
int main() {
	int n, k;
	cin >> n;
	int* a = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	cin >> k;
	if (Tim2PhanTu(a, n, k)) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}
	return 0;
}