#include <iostream>
using namespace std;
int minSubArrayLen(int a[], int target, int n) {
	int left = 0;
	int sum = 0;
	int minlength = n + 1;
	for (int right = 0; right < n; right++) {
		sum += a[right];
		while (sum >= target) {
			if ((right - left + 1) < minlength) {
				minlength = right - left + 1;
			}
			sum -= a[left];
			left++;
		}
	}
	if (minlength == n + 1) {
		return 0;
	}
	return minlength;
}
int main() {
	int n, target;
	cin >> n;
	int* a = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	cout << "target =";
	cin >> target;
	cout << minSubArrayLen(a, target, n);
	return 0;
}
