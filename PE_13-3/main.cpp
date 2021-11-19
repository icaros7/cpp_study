/*
 * PE:  13-3
 * 작성: 201735030 이호민
 * 파일: main.cpp
 */
#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream is { "input.txt" };
    ofstream os {"output.txt" };

    if(!os || !is) {        // 파일 열기 실패시
        cerr << "파일 오픈에 실패하였습니다." << endl;
        exit(1);      // 1과 함께 종료
    }

    char c;                 // 문자 입출력용 변수
    while (is >> c) {
        os << (char)(toupper(c)); // 대문자화 하여 파일 저장
    }

    return 0;
}
