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
    // setter
    void init(int &x, int &y) { this->n1 = x; this->n2 = y; }

    // n1 + n2 결과 값 반환 메서드
    int add() { return n1 + n2; }
};

int main() {
    Sum s;
    int n1, n2;

    cout << "첫번째 정수:";
    cin >> n1;

    cout << "두번째 정수:";
    cin >> n2;

    s.init(n1, n2);
    cout << "연산 결과:" << s.add() << endl;

    return 0;
}
