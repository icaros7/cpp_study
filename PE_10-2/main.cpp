/*
 * PE: 10-2
 * 작성: 201735030 이호민
 * 파일: main.cpp
 */

#include <iostream>

using namespace std;

// Box Class
class Box {
private:
    double length; // 박스의 길이
    double width; // 박스의 가로
    double height; // 박스의 세로

public:
    Box(int length = 0, int width = 0, int height = 0) : length(length), width(width), height(height) {} // 생성자

    double getVolume(void) { return length * height * width; } // 부피 반환 메서드, 매개변수 전달 방지

    bool operator== (Box &slave) { return (getVolume() == slave.getVolume()); } // == 연산자 오버라이드, 부피 동일 유무 판단
    bool operator!= (Box &slave) { return (getVolume() != slave.getVolume()); } // != 연산자 오버라이드, 부피 동일 유무 판단

    // 상자의 정보 출력 메서드
    // int boxNum: int 형 상자의 순서 정보
    void printBox(int boxNum) {
        cout << "상자 #" << boxNum << endl;
        cout << "상자의 길이: " << this->length << endl;
        cout << "상자의 너비: " << this->width << endl;
        cout << "상자의 높이: " << this->height << endl;
        cout << "상자의 부피: " << getVolume() << "\n" << endl;
    }
};

int main() {
    Box a(10,10,10), b(20,20,20);

    a.printBox(1);
    b.printBox(2);
    cout << ( a == b) << endl;

    return 0;
}
