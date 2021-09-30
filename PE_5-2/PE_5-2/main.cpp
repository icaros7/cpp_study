/*
 * PE: 5-2
 * 학번: 201735030
 * 이름: 이호민
 */
#include <iostream>

using namespace std;

class Airplane{
    string name; // 이름
    int capacity; // 승객수
    double speed; // 속도

public:
    // 멤버 변수 getter
    string getName() { return name; }
    int getCapacity() { return capacity; }
    double getSpeed() { return speed; }
    
    // 멤버 변수 setter
    void setName(string name) { this->name = name; }
    void setCapacity(int capacity) { this->capacity = capacity; }
    void setSpeed(double speed) { this->speed = speed; }
    
    // 생성자
    Airplane() { this->speed = 0.0; }
    Airplane(string name, int capacity, double speed = 0.0) {
        this->name = name;
        this->capacity = capacity;
        this->speed = speed;
    }
    
    void print();
};

// 비행기 정보 출력 메서드
void Airplane::print() { cout << "비행기의 이름: " << name << "\n비행기의 용량: " << capacity << "\n비행기의 속도: " << speed << " Km/h" << endl; }

int main() {
    Airplane plane1("보잉 787", 900, 300); // 매개변수와 함께 plane1 객체 생성
    
    cout << "비행기 #1" << endl;
    plane1.print(); // plane1 정보 출력
    
    Airplane plane2; // plane2 객체 생성
    plane2.setName("에어버스 350");
    plane2.setSpeed(1000);
    plane2.setCapacity(400);
    
    cout << "비행기 #2" << endl;
    plane2.print();
    
    return 0;
}
