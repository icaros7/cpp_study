/*
* Lab: Ch3. 행맨
* 학번: 201735030
* 이름: 이호민
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
	char ch; // 사용자 입력 버퍼
	string solution;
	string list[] = { "the", "c++", "programming", "language" };

	int n = rand() % 4;
	solution = list[n]; // rand()를 통한 무작위 list 선택

	// _로 채워진 solution 길이 만큼의 string 생성
	string guess(solution.length(), '_');

	do {
		cout << guess << endl;
		cout << "글자를 입력하시오: ";

		cin >> ch;

		// string 내 맞는 철자가 있는지 확인
		for (int i = 0; i < solution.length(); i++) { if (ch == solution[i]) guess[i] = ch; }

	} while (solution != guess);

	cout << solution << endl;
	cout << "성공하셨습니다!" << endl;

	return 0;
}