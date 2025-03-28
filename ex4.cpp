#include <iostream>
using namespace std;
int canShipInDays(int a[], int n, int days, int mid) {	//ham kiem tra xem trong luong cua tau la mid thi co van chuyen duoc so hang do trong days khong
	int dayCount = 1;	//bat dau tu ngay dau tien
	int currenWeight = 0;	
	for (int i = 0; i < n; i++) {
		if (currenWeight + a[i] > mid) {	
			dayCount++;					//chuyen sang ngay tiep theo
			currenWeight = a[i];		//dat khoi luong kien hang nay la khoi luong dau tien trong ngay
			if (dayCount > days) {
				return 0;		//so ngay vuot qua days thi la sai
			}
		}
		else {
			currenWeight += a[i];
		}
	}
	return 1;
}
int shipWithinDays(int a[], int n, int days) {		//ham tim trong luong toi thieu cua tau de co the chuyen so kien hang nay trong days ngay
	int left = a[n - 1];			//kien hang co khoi luong lon nhat
	int right = 0;
	for (int i = 0; i < n; i++) {
		right += a[i];				//tinh tong khoi luong cac kien hang
	}
	while (left < right) {		//dung ki thuat binary search 
		int mid = left + (right - left) / 2;
		if (canShipInDays(a, n, days, mid)) {
			right = mid;
		}
		else {
			left = mid + 1;
		}
	}
	return left;
}
int main() {
	int n, days;
	cin >> n;
	int* a = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	cout << "days =";
	cin >> days;
	cout << shipWithinDays(a, n, days);
	return 0;
}