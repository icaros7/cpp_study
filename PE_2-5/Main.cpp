/*
 * PE: 2-5
 * 이름: 이호민
 * 학번: 201735030
 */

#include <iostream>

int main() {
	int sum = 0;
	int usrValue;

	do {
		std::cout << "정수를 입력: ";
		std::cin >> usrValue;
		sum += usrValue;
	} while (usrValue != 0);

	std::cout << "합계=" << sum << std::endl;
	return 0;
}