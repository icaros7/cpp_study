/*
 * Lab: 01
 * 이름: 이호민
 * 학번: 201735030
 */

#include <iostream>
#include <random>

using namespace std;

int main()
{
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int> dis(0, 99);

    int cpuValue = dis(gen);
    int usrValue, counter = 0;

    cout << "정답 맞추기 시작\n===============" << endl;
    while (true) {
        cout << "사용자 답: ";
        cin >> usrValue;
        counter++;

        if (usrValue > cpuValue) { cout << "제시한 정수가 높습니다." << endl; }
        else if (usrValue < cpuValue) { cout << "제시한 정수가 낮습니다." << endl; }
        else { cout << "축하합니다! " << "시도 횟수: " << counter << endl; break; }
    }
}
