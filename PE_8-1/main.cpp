/*
 * PE: 8-1
 * 학번: 201735030
 * 이름: 이호민
 */

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int count = 0; // 사용자로부터 입력 받을 정수 개수 저장 변수
    int *p; // int 형 포인터 생성

    do { // 사용자로부터 정수 개수 입력 받기
        cout << "몇 개의 정수를 입력합니까?";
        cin >> count;
    } while (count < 1);

    p = new int[count]; // int 형 동적 배열 생성

    for (int i = 0; i < count; i++) { // 사용자로부터 정수 입력 받기
        cout << "정수를 입력하시오:";
        cin >> p[i];
    }

    cout << "입력 된 정수는: ";
    for (int k = 0; k < count; k++) {
        if (k != count - 1) { cout << p[k] << ", "; }
        else { cout << p[k] << endl; }
    }

    return 0;
}
