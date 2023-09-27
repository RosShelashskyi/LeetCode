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

    int reverseX = 0;
    int tempX = x;

    while(tempX != 0){
        reverseX = reverseX * 10 + (tempX % 10);
        tempX /= 10;
    }

    return (x == reverseX);
}

int main(){
    cout << "Enter a number: " << endl;
    int x;
    cin >> x;
    cout << isPalindrome(x) << endl;
    return 0;
}