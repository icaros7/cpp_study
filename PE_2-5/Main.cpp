/*
 * PE: 2-5
 * �̸�: ��ȣ��
 * �й�: 201735030
 */

#include <iostream>

int main() {
	int sum = 0;
	int usrValue;

	do {
		std::cout << "������ �Է�: ";
		std::cin >> usrValue;
		sum += usrValue;
	} while (usrValue != 0);

	std::cout << "�հ�=" << sum << std::endl;
	return 0;
}