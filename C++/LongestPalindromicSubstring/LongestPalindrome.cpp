#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

string longestPalindrome(string s){
    string longest = "";
    int startIndex = 0;
    int endIndex = s.length() - 1;
    int palindromeLength = 0;
    while(startIndex < endIndex){
        if(s.at(startIndex) == s.at(endIndex)){
            startIndex++;
            endIndex--;
        }
        endIndex--;
    }
}

int main(){
    string input = "tacoctt";
    cout << longestPalindrome(input) << endl;
    return 0;
}

// string GetEvenPalindrome(string s, int index){
//     cout << "Even" << endl;
//     string palindrome = s.substr(index, 2);
//     for(int i = 1; i * 2 < s.length() && index - i >= 0; i++){
//         cout << "i:" << i << endl;
//         if(s.at(index - i) == s.at(index + i)){
//             palindrome = s.substr(index - i, i * 2);
//         }else{
//             return palindrome;
//         }
//     }

//     return palindrome;
// }

// string GetOddPalindrome(string s, int index){
//     cout << "Odd" << endl;
//     string palindrome = s.substr(index, 3);
//     for(int i = 1; i * 2< s.length() && index - i >= 0; i++){
//         cout << "i:" << i << endl;
//         if(s.at(index - i) == s.at(index + 2 + i)){
//             cout << "yeye" << endl;
//             palindrome = s.substr(index - i, (i + 1)* 2 + 1);
//         }else{
//             return palindrome;
//         }
//     }

//     return palindrome;
// }

// string longestPalindrome(string s){
//     string longest;
//     longest += s.at(0);

//     if(s.length() == 1) return s;

//     for(int i = 0; i + 1 < s.length(); i++){
//         cout << "i: " << i << endl;
//         if(i > 0){
//             if(s.at(i) == s.at(i + 1) && s.at(i) == s.at(i - 1)){
//                 string temp = GetOddPalindrome(s, i - 1);
//                 if(temp.length() > longest.length()) longest = temp;
//                 continue;
//             }
//         }
//         cout << "Continue checking" << endl;
//         if(s.at(i) == s.at(i + 1)){
//             string temp = GetEvenPalindrome(s, i);
//             if(temp.length() > longest.length()) longest = temp;
//         }
//         if(i + 2 < s.length() && s.at(i) == s.at(i + 2)){
//             string temp = GetOddPalindrome(s, i);
//             if(temp.length() > longest.length()) longest = temp;
//         }
//     }

//     return longest;
// }

