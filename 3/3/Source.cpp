#include <iostream>
#include <cmath>
using namespace std;
long int min_difference = pow(10, 9);
int n;
long int a[32] = { 0 };
int f(long int petya, long int masha, int i) {
	if (i == n) {
		if (abs(petya - masha) < min_difference) {
			min_difference = abs(petya - masha);
		}
	}
	else {
		f(petya + a[i], masha, i + 1);
		f(petya, masha + a[i], i + 1);
	}
	return 0;
}
int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	f(0, 0, 0);
	cout << min_difference;
	return 0;
}