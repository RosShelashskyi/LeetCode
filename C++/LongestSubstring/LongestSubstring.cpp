#include <iostream>
#include <string.h>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

//return the length of longest substring without repeating characters
int lengthOfLongestSubstring(string s){
    if(s.length() == 0) return 0;
    if(s.length() == 1) return 1;
    vector<char> sublen;
    map<char, char> mp;
    for(int i = 0; i < s.length(); i++){
        mp.clear();
        for(int j = i; j < s.length(); j++){
            if(mp.count(s.at(j))){
                sublen.push_back(j - i);
                break;
            }
            mp.insert(pair<char, char>(s.at(j), s.at(j)));
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