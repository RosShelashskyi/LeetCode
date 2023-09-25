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
    //convert int to string using stringstream
    ostringstream input;
    input << x;
    string strX = input.str();
    string strXReverse = strX;
    reverse(strXReverse.begin(), strXReverse.end());
    if(strX == strXReverse) return 1;
    return 0;
}

int main(){
    cout << isPalindrome(-101) << endl;
    return 0;
}