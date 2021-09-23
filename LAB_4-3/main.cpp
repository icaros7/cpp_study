/*
 * Lab: 4-3
 * 학번: 201735030
 * 이름: 이호민
 */

#include <iostream>

class Car {
    int speed;
    int gear;
    std::string color;

public:
    // Car 생성자
    Car(int speed, int gear, std::string color) {
        this->speed = speed;
        this->gear = gear;
        this->color = color;
    }

    // 속도 값 증감 메서드
    void upSpeed(int value = 10) { speed += value; }
    void downSpeed(int value = 10) { speed-= value; }

    // 속도 값 getter
    int getSpeed() { return speed; }
};

int main() {
    Car c1(100, 6, "Black");
    std::cout << "속도: " << c1.getSpeed() << std::endl;

    c1.downSpeed();
    std::cout << "속도: " << c1.getSpeed() << std::endl;

    c1.upSpeed(20);
    std::cout << "속도: " << c1.getSpeed() << std::endl;

    return 0;
}
