/*
 * Lab: 9-Singleton Design Pattern
 * 작성: 201735030 이호민
 * 파일: main.cpp
 */
#include <iostream>

using namespace std;

class Camera {
public:
    static Camera *getInstance(); // instance getter

private:
    Camera() {}
    static Camera *instance; // static 형 instance 포인터

public:
    void capture() { cout << "사진 촬영이 수행 되었음!" << endl; } // 사진 촬영 메서드
};

Camera* Camera::instance = 0;
Camera* Camera::getInstance() {
    if (!instance) {
        instance = new Camera();
        cout << "첫번째 객체가 생성됨" << endl;
    }
    else { cout << "이전 객체를 반환함" << endl; }

    return instance;
}

int main() {
    Camera *s1 = Camera::getInstance();
    Camera *s2 = Camera::getInstance();
    Camera *s3 = Camera::getInstance();

    s1->capture();

    return 0;
}
