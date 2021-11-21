/*
 * PE:  13-4
 * 작성: 201735030 이호민
 * 파일: main.cpp
 */
#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main() {
    ifstream is{ "input.txt" };
    if (!is) { // 파일 열기 실패시
        cerr << "파일 오픈에 실패하였습니다." << endl;
        exit(1); // 1과 함께 종료
    }

    vector<char> v; // char 형 벡터 생성
    char c; // 임시 문자열 생성
    while (is.get(c)) { v.insert(v.begin(), c); } // v 맨 앞에 읽은 c insert
    for (auto& i : v) { cout << i; } // v 벡터 출력

    return 0;
}
