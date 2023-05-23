//SOLVED
//RUNTIME - 19 ms, beats 64.19% 
//MEMORY  - 8.2 MB, beats
#include <iostream>
#include <string.h>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

//return the length of longest substring without repeating characters
int lengthOfLongestSubstring(string s){
    if(s.length() == 0) return 0;
    vector<int> sublen;
    
    for(int i = 0; i < s.length(); i++){
        int charArr[128] = {0};
        for(int j = i; j < s.length(); j++){
            int val = s.at(j);
            if(charArr[val] == 1){
                sublen.push_back(j - i);
                break;
            }
            charArr[val] = 1;
            if(j == s.length() - 1) sublen.push_back(s.length() - i);
        }
    }
    sort(sublen.begin(), sublen.end());
    return sublen.back();
}

int main(){
    int a = lengthOfLongestSubstring(" ");
    cout << a << endl;
    return 0;
}