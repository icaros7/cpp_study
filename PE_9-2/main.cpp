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
    void deletePtr(); // 동적 할당 메모리 해제를 위한 메서드
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

// 동적 할당 메모리 해제를 위한 메서드
void Line::deletePtr() {
    delete ptr;
}

int main() {
    Line line1(10); // 길이가 10인 일반 생성자 호출
    Line line2(line1); // line1 복사 생성자 호출
    Line line3(line2); // line2 복사 생성자 호출
    cout << "선의 길이: " << line3.getLength() << endl;

    Line line4(line3); // line3 복사 생성자 호출
    cout << "선의 길이: " << line4.getLength() << endl;

    /* line4.ptr -> line3.ptr -> line2.ptr -> line1.ptr 을
     * 가르키고 있으므로 line1.ptr 만 delete 호출
     * 소멸자를 이용하여 delete 호출시, line1.ptr을 4번 delete 시도를 하여 오류 발생 */
    line1.deletePtr();

    return 0;
}
