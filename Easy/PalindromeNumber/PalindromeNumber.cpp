//ACCEPTED
//Runtime - 7ms, beats 73.68%
//Memory - 6.31 MB, beats 12.13% (BRO THIS IS SO BAD)
//try without reverse?
#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
using namespace std;

bool isPalindrome(int x){
    if(x < 0) return 0;

    int s = 1;
    while((x / s) > 10){
        s *= 10;
    }
    s *= 10;

    cout << "s: " << s << endl;

    int m = 10;
    while(s != m){
        int digitX = (x / s);
        cout << "x: " << digitX << endl;
        int digitY = (x % s) / m;
        cout << "y: " << digitY << endl;
        if(digitX != digitY) return 0;
        s /= 10;
    }

    return 1;
}

int main(){
    cout << "Enter a number: " << endl;
    int x;
    cin >> x;
    cout << isPalindrome(x) << endl;
    return 0;
}