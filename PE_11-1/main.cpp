/*
 * PE:  11-1
 * 작성: 201735030 이호민
 * 파일: main.cpp
 */
#include <iostream>

using namespace std;

class Point {
    int x, y; // 2차원 좌표 변수

public:
    /// 생성자
    /// \param x 2차원 x 좌표
    /// \param y 2차원 y 좌표
    Point(int x, int y) : x(x), y(y) {}

    /// 객체 정보 출력 메서드
    /// \param isParent 자식 클래스로부터의 호출 유무
    void print(bool isParent = false) {
        cout << "(" << getX() << "," << getY();

        if (!isParent) { cout << ")" << endl; } // 자식 클래스에서 호출 하지 않은 경우 괄호 및 개행 문자 출력
    }

    // getter
    int getX() { return x; }
    int getY() { return y; }
};

class ThreeDPoint : Point{
    int z; // 3차원용 z 좌표 변수

public:
    /// 생성자
    /// \param x 3차원 x 좌표
    /// \param y 3차원 y 좌표
    /// \param z 3차원 z 좌표
    ThreeDPoint(int x = 0, int y = 0, int z = 0) : Point(x, y) { this->z = z; }

    /// + 연산자 오버로딩
    /// \param slave 피연산자
    /// \return this 와 slave 의 각 좌표 값의 합을 좌표로 하는 객체
    ThreeDPoint operator+(ThreeDPoint &slave) { // TODO: 왜 const ThreeDPoint &slave로 하면 안되는지 알아보기
        ThreeDPoint result(getX() + slave.getX(), getY() + slave.getY(), getZ() + slave.getZ());
        return result;
    }

    void print() { // 객체 정보 출력 메서드 오버로딩
        Point::print(true); // 부모 클래스의 print 메서드 호출
        cout << "," << getZ() << ")" << endl;
    }

    // getter
    int getZ() { return z; }
};

int main() {
    ThreeDPoint p1(10,10, 10); // ThreeDPoint 객체 생성
    ThreeDPoint p2(10,10, 10); // ThreeDPoint 객체 생성
    ThreeDPoint p3; // 초기화되지 않은 ThreeDPoint 객체 생성

    p3 = p1 + p2;
    p3.print();
    return 0;
}
