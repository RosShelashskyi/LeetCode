#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

string longestPalindrome(string s);

int main(){
    string input = "babad";
    cout << longestPalindrome(input) << endl;
    return 0;
}

string GetEvenPalindrome(string s, int index){
    string palindrome = s.substr(index, 2);
    for(int i = 1; i * 2 < s.length() && index - i >= 0; i++){
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
    for(int i = 1; i * 2< s.length() && index - i >= 0; i++){
        cout << "i:" << i << endl;
        if(s.at(index - i) == s.at(index + 2 + i)){
            cout << "yeye" << endl;
            palindrome = s.substr(index - i, (i + 1)* 2 + 1);
        }else{
            return palindrome;
        }
    }

    return palindrome;
}

string longestPalindrome(string s){
    string longest;

    if(s.length() == 1) return s;

    for(int i = 0; i + 1 < s.length(); i++){
        cout << "i: " << i << endl;
        if(s.at(i) == s.at(i + 1)){
            string temp = GetEvenPalindrome(s, i);
            if(temp.length() > longest.length()) longest = temp;
        }
        if(i + 2 < s.length() && s.at(i) == s.at(i + 2)){
            string temp = GetOddPalindrome(s, i);
            if(temp.length() > longest.length()) longest = temp;
        }
    }

    return longest;
}

