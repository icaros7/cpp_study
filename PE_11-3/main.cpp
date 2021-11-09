/*
 * PE:  11-3
 * 작성: 201735030 이호민
 * 파일: main.cpp
 */
#include <iostream>

using namespace std;

class Employee {
    string name; // 객체 이름 변수
    int salary; // 객체 월급 변수

public:
    /// 생성자
    /// \param name 객체 이름
    /// \param salary 객체 월급
    Employee(string name, int salary) : name(name), salary(salary) {}

    // getter
    string getName() { return name; }
    int getSalary() { return salary; }

    // setter
    void setName(string name) { this->name = name; }
    void setSalary(int salary) { this->salary = salary; }

    /// 월급 정보 계산 메서드
    /// \return 객체의 월급 값 반환
    int computeSalary() { return salary; }

    void print() {
        cout << "이름: " << getName() << endl;
        cout << "월급: " << computeSalary() << endl;
    }
};

class Manager : Employee {
    int bonus; // 객체 보너스 변수

public:
    /// 생성자
    /// \param name 객체 이름
    /// \param salary 객체 월급
    /// \param bonus 객체 보너스
    Manager(string name, int salary, int bonus) : Employee(name, salary) { this->bonus = bonus; }

    int getBonus() { return bonus; } // bonus getter
    void setBonus(int bonus) { this->bonus = bonus; } // bonus setter

    /// 월급 정보 계산 메서드 오버로딩
    /// \return 객체의 월급 + 보너스 값 반환
    int computeSalary() { return getSalary() + getBonus(); }

    void print() {
        Employee::print();
        cout << "보너스: " << getBonus() << endl;
        cout << "전체 급여: " << computeSalary() << endl;
    }
};

int main() {
    Manager man("김철수", 100, 200);
    man.print();

    return 0;
}
