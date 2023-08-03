#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main(){

}

string LongestPalindrome(string s){
    string longest;

    for(int i = 1; i < s.length(); i++){
        if(s.at(i) == s.at(i + 1)){
            string temp = GetEvenPalindrome(s, i);
            if(temp.length() > longest.length()) longest = temp;
        }
        if(s.at(i) == s.at(i + 2)){
            string temp = GetOddPalindrome(s, i);
            if(temp.length() > longest.length()) longest = temp;
        }
    }

    return longest;
}

string GetEvenPalindrome(string s, int index){
    string palindrome = s.substr(index, 2);
    for(int i = 1; i < s.length() && index - i >= 0; i++){
        if(s.at(index - i) == s.at(index + 1 + i)){
            palindrome = s.substr(index - i, i * 2);
        }else{
            return palindrome;
        }
    }

    return palindrome;
}

string GetOddPalindrome(string s, int index){
    string palindrome = s.substr(index, 3);
    for(int i = 1; i < s.length() && index - 1 >= 0; i++){
        if(s.at(index - i) == s.at(index + 2 + i)){
            palindrome = s.substr(index - i, i * 2 + 1);
        }else{
            return palindrome;
        }
    }

    return palindrome;
}