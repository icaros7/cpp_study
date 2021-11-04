/*
 * Lab: 11-1
 * 작성: 201735030 이호민
 * 파일: main.cpp
 */

#include <iostream>

using namespace std;

class Person {
private:
    int birthYear; // 태어난 해
    string name; // 이름

public:
    /// 기본 생성자
    /// \param name 객체 이름
    /// \param birth 객체 태어난 해
    Person(string name, int birth) : birthYear(birth), name(name) { }

    /// 객체 정보 출력 메서드드
    void print() {
        cout << "이름: " << name << endl;
        cout << "출생연도: " << birthYear << endl;
    }
};

class Student : public Person {
private:
    string university; // 대학교 이름

public:
    /// 기본 생성자
    /// \param name 객체 이름
    /// \param birth 객체 태어난 해
    /// \param univName 객체 재학 대학
    Student(string name, int birth, string univName) : Person(name, birth) { university = univName; }

    /// print 메서드 재정의
    void print() {
        Person::print();
        cout << "대학교: " << university << endl;
    }
};

int main() {
    Student s1("Hong", 1997, "Kor Univ.");
    s1.print();

    return 0;
}