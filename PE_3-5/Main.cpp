/*
* PE: 3-1
* �й�: 201735030
* �̸�: ��ȣ��
*/

#include <iostream>
#include <string>

using namespace std;

/// <summary>
/// �Ű������� �Էµ� �� ��ŭ Hello �� ��� �մϴ�.
/// </summary>
/// <param name="i">�⺻ �� 1, �ݺ� Ƚ��</param>
void sayHello(int i = 1) {
	// �Ű����� ���� 1�̶�� Ƚ�� ǥ�⸦ ���� �մϴ�.
	cout << "sayHello(" << ((i == 1) ? "" : to_string(i)) << ")->";
	for (int k = 0; k < i; k++) { cout << "Hello "; }
	cout << endl;
}

int main() {
	sayHello();
	sayHello(3);

	return 0;
}