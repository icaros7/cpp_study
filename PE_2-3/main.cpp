/*
 * PE: 2-3
 * 이름: 이호민
 * 학번: 201735030
 */

#include <iostream>

int main() {
    int days[] = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    for (int i = 0; i < 12; i++) {
        std::cout << i + 1 << "월은 " << days[i] << "까지 있습니다." << std::endl;
    }

    return 0;
}