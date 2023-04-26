#include <iostream>

int main() {
	int n, sum = 0;
	std::cout << "Nhap n: ";
	std::cin >> n;
	for (int i = 1; i <= n; i++) {
		sum += i;
	}
	std::cout << "Tong tu 1 den " << n << " la: " << sum << std::endl;
	return 0;
}