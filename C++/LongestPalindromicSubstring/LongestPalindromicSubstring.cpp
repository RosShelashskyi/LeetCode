#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string longestPalindrome(string s){
    string longest = "";
    if(s.length() == 1) return s;
    for(int i = 0; i < s.length(); i++){
        for(int j = 1; j <= s.length(); j++){
            string subs = s.substr(i, j);
            string rev = subs;
            reverse(rev.begin(), rev.end());
            if(subs == rev && subs.length() > longest.length()) longest = subs;
        }
    }
    return longest;
}

int main(){
    string s = "bb";
    cout << longestPalindrome(s) << endl;
    return 0;
}



// string evenPalindrome(string s){

// }

// string oddPalindrome(string s){
//     string result = "";
//     int middle = s.length() / 2 + 1;
//     for(int i = 1; i < s.length() - middle; i++){
//         if(s.at(middle - i) != s.at(middle + i)){
//             return result;
//         }
//         result = s.substr(middle - i, 2 * i + 1);
//     }
//     return result;
// }