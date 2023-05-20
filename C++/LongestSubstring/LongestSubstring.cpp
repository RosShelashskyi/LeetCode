#include <iostream>
#include <string.h>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

//return the length of longest substring without repeating characters
int lengthOfLongestSubstring(string s){
    vector<char> sublen;
    for(int i = 0; i < s.length(); i++){
        map<char, char> mp;
        for(int j = i; j < s.length(); j++){
            if(mp.count(s.at(j))){
                sublen.push_back(j);
                break;
            }
            mp.insert(pair<char, char>(s.at(j), s.at(j)));
        }
    }
    sort(sublen.begin(), sublen.end());
    return sublen.back();
}

int main(){
    int a = lengthOfLongestSubstring("abcabcbb");
    cout << a << endl;
    return 0;
}