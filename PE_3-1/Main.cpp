/*
* PE: 3-1
* �й�: 201735030
* �̸�: ��ȣ��
*/

#include <iostream>

using namespace std;

/// <summary>
/// ���� 3�� ���� �迭 �� ���� ū ���� ��ȯ �մϴ�.
/// </summary>
/// <param name="arr">3�� �̻��� ���� �迭</param>
/// <returns>���� ū int ��</returns>
int maximum(int arr[]) {
    return (arr[0] >= arr[1] && arr[0] >= arr[2]) ? arr[0] : (arr[1] >= arr[0] && arr[1] >= arr[2]) ? arr[1] : arr[2];
}

int main() {
    int value[3]; // ����� �Է� ������ ���� �ӽ� �迭

    cout << "3���� ������ �Է��Ͻÿ�: ";
    cin >> value[0];
    cin >> value[1];
    cin >> value[2];

    cout << "���� ū ������ " << maximum(value) << endl;
}