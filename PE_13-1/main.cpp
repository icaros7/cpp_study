/*
 * PE:  13-1
 * 작성: 201735030 이호민
 * 파일: main.cpp
 */
#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ofstream os {"sample.txt" };

    if(!os) {               // 파일 열기 실패시
        cerr << "파일 오픈에 실패하였습니다." << endl;
        exit(1);      // 1과 함께 종료
    }

    for(int i = 0; i < 10; i++) {
        os << i << " ";
    }

    return 0;
}
