/*
* PE: 4-3
* 학번: 201735030
* 이름: 이호민
*/

#include <iostream>

using namespace std;

class Sum{
    int n1, n2;

public:
    // private 변수 setter
    void setNumber(int &n1, int &n2) { this->n1 = n1; this->n2 = n2; }

    // n1 + n2 결과 값 반환 메서드
    int add() { return n1 + n2; }
};

int main() {
    Sum s; // 객체 생성
    int n1, n2; // 입력 받을 임시 Buffer

    cout << "첫번째 정수:";
    cin >> n1;

    cout << "두번째 정수:";
    cin >> n2;
    
    s.setNumber(n1, n2); // s 객체에 대한 setNumber 메서드 호출
    cout << "연산 결과:" << s.add() << endl;

    return 0;
}
