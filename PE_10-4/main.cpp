/*
 * PE: 10-4
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
    friend void printBox(Box &box, int boxNum); // 박스 객체의 모든 정보를 출력하는 friend 메서드 정의
    
    Box(int length = 0, int width = 0, int height = 0) : length(length), width(width), height(height) {} // 생성자
    
    double getVolume(void) { return length * height * width; } // 부피 반환 메서드, 매개변수 전달 방지
};

void printBox(Box &box, int boxNum) { // 박스 객체의 모든 데이터를 출력하는 friend 메서드
    cout << "상자 #" << boxNum << endl;
    cout << "상자의 길이: " << box.length << endl;
    cout << "상자의 너비: " << box.width << endl;
    cout << "상자의 높이: " << box.height << endl;
    cout << "상자의 부피: " << box.getVolume() << endl;
}

int main() {
    Box a(10,10,10);
    
    printBox(a, 1);
    
    return 0;
}