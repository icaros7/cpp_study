/*
 * PE: 6-5
 * 학번: 201735030
 * 이름: 이호민
 */

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Student{
    string name; // 학생 이름 변수
    double mark; // 학생 학점 변수
    
public:
    Student(string &name, double &mark) { // 생성자
        this->name = name;
        this->mark = mark;
    }
    
    // 변수 getter
    string getName() { return name; }
    double getMark() { return mark; }
    
    // 학생 정보 출력 메서드
    void getInfo() {
        cout << "이름: " << getName() << endl;
        cout << "학점: " << getMark() << endl;
    }
};

// 성적 비교용 메서드
bool compareMark(Student &master, Student &slave) { return master.getMark() < slave.getMark(); }

int main() {
    vector<Student> students; // 학생 객체 동적 배열
    int studentCount = 0; // 학생 수 입력용 변수
    string name; // 학생 이름 입력용 변수
    double mark; // 학생 학점 입려용 변수
    
    cout << "총 학생 수: ";
    cin >> studentCount;
    if (studentCount == 0) { return 0; } // 입력 받을 학생 수가 없다면 return
    
    for(int i = 0; i < studentCount; i++) { // 입력 받은 학생 수 만큼 push_back;
        cout << "이름: ";
        cin >> name;
        cout << "학점: ";
        cin >> mark;
        
        students.push_back(Student(name, mark));
    }
    
    sort(students.begin(), students.end(), compareMark); // 성적 순 정렬
    
    cout << "=========================" << endl;
    for (Student &i : students) {
        i.getInfo();
    }
    cout << "=========================" << endl;
    return 0;
}
