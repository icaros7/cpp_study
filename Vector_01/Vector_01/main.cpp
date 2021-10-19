//
//  main.cpp
//  Vector_01
//
//  Created by iCAROS7 on 2021. 10. 14..
//

#include <iostream>
#include <vector>

using namespace std;

int main(int argc, const char * argv[]) {
    vector<int> wow;
    for (int i = 0; i < 100; i++) {
        if (i > 1) { wow.push_back((wow[i - 1] + [i - 2]); }
        else { wow.push_back(1); }
    }
    
    for (int &i : wow) {
        cout << i << endl;
    }
    return 0;
}
