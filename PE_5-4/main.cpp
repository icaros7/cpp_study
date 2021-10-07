/*
 * PE: 5-4
 * 학번: 201735030
 * 이름: 이호민
 */
#include <iostream>

using namespace std;

class Movie{
    string title; // 영화 제목
    string director; // 감독 명
    double rating; // 평점

public:
    // 멤버 변수 setter
    void setTitle(string title) { this->title = title; }
    void setDirector(string director) { this->director = director; }
    void setRating(double rating) { this->rating = rating; }

    // 멤버 변수 getter
    string getTitle() { return title; }
    string getDirector() { return director; }
    double getRating() { return rating; }

    // 생성자
    Movie() { rating = 0.0; }
    Movie(string title, string director, double rating) {
        this->title = title;
        this->director = director;
        this->rating = rating;
    }
};

int main() {
    Movie movie1("타이타닉", "제임스 카메론", 9.0); // movie1 객체 생성
    movie1.setRating(9.5);

    Movie movie2("지오스톰", "단 데블린", 8.34); // movie2 객체 생성
    movie2.setDirector("딘 데블린");

    cout << "영화 #1" << "\n영화 제목: " << movie1.getTitle() << "\n영화 감독: " << movie1.getDirector() << "\n영화 평점: " << movie1.getRating() << "\n" << endl;
    cout << "영화 #2" << "\n영화 제목: " << movie2.getTitle() << "\n영화 감독: " << movie2.getDirector() << "\n영화 평점: " << movie2.getRating() << "\n" << endl;

    return 0;
}