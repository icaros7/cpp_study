/*
* PE: 4-1
* 학번: 201735030
* 이름: 이호민
*/

#include <iostream>

using namespace std;

class Person {
    string name; // 이름 값
    int age; // 나이 값

public:
    // Person 필드 변수 setter
    void setPerson(string name, int age) {
        this->name = name;
        this->age = age;
    }

    // Person 객체 출력
    void print() {
        cout << "이름: " << name << "\n나이: " << age << endl;
    }
};

int main() {
    Person p1;
    p1.setPerson("김철수", 22);
    p1.print();

    return 0;
}
