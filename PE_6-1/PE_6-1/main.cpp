/*
 * PE: 6-1
 * 학번: 201735030
 * 이름: 이호민
 */

#include <iostream>

using namespace std;

class Book {
    string title; // 책 제목 정보
    int price; // 책 가격 정보

public:
    // 생성자
    Book(string title, int price) {
        this->title = title;
        this->price = price;
    }

    // 책 정보 출력 메서드
    void print() {
        cout << "제목: " << title << ", 가격: " << price << endl;
    }
};

int main() {
    // 길이 2의 책 배열 생성 및 초기화
    Book books[2] = {
            Book("어서와 C++", 25000),
            Book("어서와 C", 22000)
    };

    cout << "소장하고 있는 책 정보" << endl;
    cout << "===================" << endl;
    for (Book &b : books) { b.print(); } // books 배열에서 책 정보 반복 출력
    cout << "===================" << endl;

    return 0;
}
