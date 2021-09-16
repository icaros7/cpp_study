/*
* PE: 3-1
* 학번: 201735030
* 이름: 이호민
*/

#include <iostream>

using namespace std;

/// <summary>
/// 길이 3의 정수 배열 중 가장 큰 값을 반환 합니다.
/// </summary>
/// <param name="arr">3개 이상의 정수 배열</param>
/// <returns>가장 큰 int 값</returns>
int maximum(int arr[]) {
    return (arr[0] >= arr[1] && arr[0] >= arr[2]) ? arr[0] : (arr[1] >= arr[0] && arr[1] >= arr[2]) ? arr[1] : arr[2];
}

int main() {
    int value[3]; // 사용자 입력 정수를 받을 임시 배열

    cout << "3개의 정수를 입력하시오: ";
    cin >> value[0];
    cin >> value[1];
    cin >> value[2];

    cout << "가장 큰 정수는 " << maximum(value) << endl;
}