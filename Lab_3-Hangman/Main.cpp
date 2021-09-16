/*
* Lab: Ch3. ���
* �й�: 201735030
* �̸�: ��ȣ��
*/

#include <iostream>
#include <string>
#include <random>

using namespace std;

int main() {
	char ch; // ����� �Է� ����
	string solution;
	string list[] = { "the", "c++", "programming", "language" };

	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<int> dis(0, 99);

	int n = dis(gen) % 4;
	solution = list[n]; // ������ list ����

	// _�� ä���� solution ���� ��ŭ�� string ����
	string guess(solution.length(), '_');

	do {
		cout << guess << endl;
		cout << "���ڸ� �Է��Ͻÿ�: ";

		cin >> ch;

		// string �� �´� ö�ڰ� �ִ��� Ȯ��
		for (int i = 0; i < solution.length(); i++) { if (ch == solution[i]) guess[i] = ch; }

	} while (solution != guess);

	cout << solution << endl;
	cout << "�����ϼ̽��ϴ�!" << endl;

	return 0;
}