#include <iostream>
#include <string>
#include <vector>
using namespace std;

string FindLongestPalindrome(string s, int index){
    string longest = "";

    cout << "Recursion level" << endl;
    cout << s.length() << ", " << index << endl;

    if(index >= s.length() - 1){
        cout << "Basecase" << endl;
        return s.substr(s.length() - 1, 1);
    }

    for(int i = 0; index - i >= 0 && index + i <= s.length(); i++){
        if(s.at(index - i) != s.at(index + 1)) break;
        longest = s.substr(index - i + 1, i * 2 + 1);
    }

    if(longest.length() > FindLongestPalindrome(s, index + 1).length()){
        return longest;
    }else{
        return FindLongestPalindrome(s, index + 1);
    }
}

int main(){
    string s = "tacocat";
    cout << FindLongestPalindrome(s, 0) << endl;
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