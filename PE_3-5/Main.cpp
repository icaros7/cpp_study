/*
* PE: 3-1
* 학번: 201735030
* 이름: 이호민
*/

#include <iostream>
#include <string>

using namespace std;

/// <summary>
/// 매개변수로 입력된 값 만큼 Hello 를 출력 합니다.
/// </summary>
/// <param name="i">기본 값 1, 반복 횟수</param>
void sayHello(int i = 1) {
	// 매개변수 값이 1이라면 횟수 표기를 생략 합니다.
	cout << "sayHello(" << ((i == 1) ? "" : to_string(i)) << ")->";
	for (int k = 0; k < i; k++) { cout << "Hello "; }
	cout << endl;
}

int main() {
	sayHello();
	sayHello(3);

	return 0;
}