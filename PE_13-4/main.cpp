/*
 * PE:  13-4
 * 작성: 201735030 이호민
 * 파일: main.cpp
 */
#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream is{ "input.txt" };
    if (!is) {      // 파일 열기 실패시
        cerr << "파일 오픈에 실패하였습니다." << endl;
        exit(1);     // 1과 함께 종료
    }

    is.seekg(0, ios::end);  // 커서 위치를 가장 끝으로 이동
    int num = is.tellg();   // 현재 커서 위치를 파일의 크기로 간주하고 저장
    char *c = new char[num];// char 형 동적 배열 생성
    is.clear();             // 이전 값 clear
    is.seekg(ios::beg);     // 커서 위치를 가장 앞으로 이동

    for (int i = num - 1; i >= 0; i--) { is.get(c[i]); } // 동적 배열 뒷 요소부터 저장
    for (int i = 0; i < num; i++) { cout << c[i]; } // 배열 앞 요소부터 출력

    return 0;
}