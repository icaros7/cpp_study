/*
 * PE:  13-2
 * 작성: 201735030 이호민
 * 파일: main.cpp
 */
#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream is { "sample.txt" };

    if(!is) {               // 파일 열기 실패시
        cerr << "파일 오픈에 실패하였습니다." << endl;
        exit(1);      // 1과 함께 종료
    }

    int sumNumber = 0;      // 전체 합 저장용 변수
    int number;             // ifstream 임시 저장소
    while (is) {
        is >> number;
        sumNumber += number;
    }

    cout << "파일에 저장된 정수의 합은 " << sumNumber << endl;

    return 0;
}
