/*
 * Lab: 5-1
 * 학번: 201735030
 * 이름: 이호민
 */

#include <iostream>

class Rectangle{
    int width, height;
    
public:
    Rectangle() {
        width = 3;
        height = 4;
    }
    
    Rectangle(int width, int height) {
        this->width = width;
        this->height = height;
    }
    
    int calc() { return width * height; }
};

int main() {
    Rectangle re;
    std::cout << re.calc() << std::endl;
    
    Rectangle ree(5,6);
    std::cout << ree.calc() << std::endl;
}
