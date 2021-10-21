/*
 * PE: 9-2
 * 작성: 201735030 이호민
 * 파일: main.cpp
 */
#include <iostream>

using namespace std;

class Line {
public:
    Line(int len);
    Line(const Line &line);
    int getLength(void) { return *ptr; } // 선의 길이 getter

private:
    int *ptr; // 선의 길이 저장는 포인터
};

// 일반 생성자
Line::Line(int len) {
    cout << "일반 생성자" << endl;
    ptr = new int;
    *ptr = len;
}

// 복사 생성자
Line::Line(const Line &line) {
    cout << "복사 생성자" << endl;
    this->ptr = line.ptr;
}

int main() {
    Line line1(10); // 길이가 10인 일반 생성자 호출
    Line line2(line1); // line1 복사 생성자 호출
    Line line3(line2); // line2 복사 생성자 호출
    cout << "선의 길이: " << line3.getLength() << endl;

    Line line4(line3); // line3 복사 생성자 호출
    cout << "선의 길이: " << line4.getLength() << endl;

    return 0;
}
