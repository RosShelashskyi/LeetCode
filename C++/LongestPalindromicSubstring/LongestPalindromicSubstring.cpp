#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){

}

string longestPalindrome(string s){
    vector<string> palindromes;

    if(s.length() % 2 == 0){
        palindromes.push_back(evenPalindrome(s));
    }else{
        palindromes.push_back(oddPalindrome(s));
    }

}

string evenPalindrome(string s){

}

string oddPalindrome(string s){
    string result = "";
    int middle = s.length() / 2 + 1;
    for(int i = 1; i < s.length() - middle; i++){
        if(s.at(middle - i) != s.at(middle + i)){
            return result;
        }
        result = s.substr(middle - i, 2 * i + 1);
    }
    return result;
}