/*
 * PE: 6-1
 * 학번: 201735030
 * 이름: 이호민
 */
#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> userIntArray; // 동적 벡터 int형 배열 생성
    int count = 0; // 크기 지정용 변수
    int userInput; // 사용자가 입력 할 정수를 저장할 변수

    cout << "정수의 개수: ";
    cin >> count;
    if (count == 0) { return 0; } // 입력 값이 0이라면, return

    for (int i = 0; i < count; i++) { // count 만큼 정수 입력하여, push_back()
        cout << "정수를 입력하시오: ";
        cin >> userInput;
        userIntArray.push_back(userInput);
    }

    // (조건) 범위 기반 루프를 사용한다.
    int minMax[2] = {userIntArray[0], userIntArray[0]};
    for (int &i : userIntArray) {
        if (i <= minMax[0]) { minMax[0] = i; }
        else if (i >= minMax[1]) { minMax[1] = i; }
    }

    cout << "최대값: " << minMax[1] << "\n최소값: " << minMax[0] << endl;

    return 0;
}
