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
    // 변수 init 을 위한 생성자
    Sum() {
        n1 = 0;
        n2 = 0;
    }

    // setter
    void setN1(int n) { this->n1 = n; }
    void setN2(int n) { this->n2 = n; }

    // n1 + n2 결과 값 반환 메서드
    int add() { return n1 + n2; }
};

int main() {
    Sum s;
    int n1, n2;

    cout << "첫번째 정수:";
    cin >> n1;
    s.setN1(n1);

    cout << "두번째 정수:";
    cin >> n2;
    s.setN2(n2);

    cout << "연산 결과:" << s.add() << endl;

    return 0;
}
