/*
 * Lab: 4-1
 * 학번: 201735030
 * 이름: 이호민
 */

#include <iostream>

class Rectangle {
    int width, height;

public:
    // 생성자
    Rectangle(int w, int h) {
        width = w;
        height = h;
    }

    // 사각형의 넓이를 계산하여 반환
    int calcArea(){ return width * height; }
};

int main() {
    Rectangle r1(3,4);

    std::cout << "사각형 넓이: " << r1.calcArea() << std::endl;

    return 0;
}
