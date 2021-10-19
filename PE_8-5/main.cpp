/*
 * PE: 8-5
 * 학번: 201735030
 * 이름: 이호민
 */

#include <iostream>

using namespace std;

class Student {
    string name; // 학생 이름 변수

public:
    Student(string name = "") { this->name = name; } // 생성자
    string getName() { return name; } // name getter
    void setName(string name) { this->name = name; } // name setter
};

class MyClass {
    string className; // 학급 이름 변수
    Student *p; // 학생 객체 포인터
    int size; // 학급 인원 변수

public:
    MyClass(string className = "", int size = 1) {
        this->className = className;
        this->size = size;
        p = new Student[size];
    }

    ~MyClass() {
        delete[] p; // 소멸자를 이용해 메모리 반환
    }

    // getter
    string getClassName() { return className; }
    Student* getStudent() { return p; }
    int getSize() { return size; }

    // setter
    void setClassName(string className) { this->className = className; }
    void setStudent() {
        for (int i = 0; i < getSize(); i++) { // 학생 수 만큼 이름 입력 받기
            cout << "학생 #" << i + 1 << " 이름: ";
            string name;
            cin >> name;

            getStudent()[i].setName(name);
        }
    }

    // 학급 학생 정보 모두 출력
    void print() {
        cout << "\n\n학급 " << getClassName() << "의 학생들은 다음과 같다." << endl;
        for (int i = 0; i < size; i++) { cout << "학생 #" << i + 1 << ": " << p[i].getName() << endl; }
    }
};

int main() {
    int size = 0;
    do {
        cout << "학생 수가 몇명인가? ";
        cin >> size;
    } while (size < 1); // 학생 수 입력 받기
    MyClass sp("special", size); // 학생수가 size 명인 "special" 학급 생성

    sp.setStudent();
    sp.print();

    return 0;
}
