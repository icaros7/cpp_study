/*
 * PE: 9-1
 * 작성: 201735030 이호민
 * 파일: main.cpp
 */
#include <iostream>

using namespace std;

class Circle {
public:
    int x, y; // 원의 좌표 변수
    int radius; // 원의 반지름 변수

    // 생성자
    Circle() : x(0), y(0), radius(0) { }
    Circle(int x, int y, int r) : x(x), y(y), radius(r) { }

    // 객체 정보 출력 메서드
    void print() { cout << "Circle(" << radius << ")" << endl; }
};

// 원 크기 비교 메서드
Circle getLargerCircle(Circle c1, Circle c2) { // 객체 2개 의도적 복사 전달 및 생성
    if (c1.radius >= c2.radius) { return c1; } // 크기가 동일하다면 의도적 1번 객체 반환
    else { return c2; }
}

int main() {
    Circle c1(0, 0, 10); // 반지름의 크기가 10인 원 객체 생성
    c1.print();

    Circle c2(0, 0, 20); // 반지름의 크기가 29인 원 객체 생성
    c2.print();

    cout << "더 큰 원은 다음과 같다." << endl;
    getLargerCircle(c1, c2).print();

    return 0;
}
