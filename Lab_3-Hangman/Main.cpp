/*
* Lab: Ch3. ���
* �й�: 201735030
* �̸�: ��ȣ��
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
	char ch; // ����� �Է� ����
	string solution;
	string list[] = { "the", "c++", "programming", "language" };

	int n = rand() % 4;
	solution = list[n]; // rand()�� ���� ������ list ����

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