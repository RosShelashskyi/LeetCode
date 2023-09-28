#include <iostream>
#include <string>
#include <vector>
using namespace std;

string longestCommonPrefix(vector<string>& strs){
    string prefix = "";
    for(int i = 0; i < strs.size(); i++){
        char temp = strs.at(0)[i];
        bool isDifferent = false;
        for(int j = 0; j < strs.size(); i++){
            if(temp != strs.at(j)[i]) isDifferent = true;
        }
        if(!isDifferent) prefix += temp;
    }
    return prefix;
}