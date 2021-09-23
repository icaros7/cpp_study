/*
* PE: 4-2
* 학번: 201735030
* 이름: 이호민
*/

#include <iostream>

class Computer {
    std::string name;
    int RAM;
    double cpu_speed;

public:
    // setter
    void setComputer(std::string name, int RAM, double cpu_speed) {
        this->name = name;
        this->RAM = RAM;
        this->cpu_speed = cpu_speed;
    }

    // 객체 출력
    void print() {
        std:: cout << "이름: " << name << "\nRAM: " << RAM << "\nCPU 속도: " << cpu_speed << std::endl;
    }
};

int main() {
    Computer office;
    office.setComputer("오피스 컴퓨터", 8, 4.2);
    office.print();

    return 0;
}
