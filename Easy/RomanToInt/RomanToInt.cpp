#include <iostream>
#include <string>
using namespace std;

int romanToInt(string s){
    if(s.length() == 0) return 0;
    string sub = s.substr(1, s.length() - 2);
    switch(s[0]){
        case 'M':
            return 1000 + romanToInt(sub);
        case 'D':
            return 500 + romanToInt(sub);
        case 'C':
            if(s.length() > 1){
                if(s[1] == 'D'){
                    sub = sub.substr(1, sub.length() - 2);
                    return 400 + romanToInt(sub);
                } 
                if(s[1] == 'M'){
                    sub = sub.substr(1, sub.length() - 2);
                    return 900 + romanToInt(sub);
                } 
            }
            return 100 + romanToInt(sub);
        case 'L':
            return 50 + romanToInt(sub);
        case 'X':
            if(s.length() > 1){
                if(s[1] == 'L'){
                    sub = sub.substr(1, sub.length() - 2);
                    return 40 + romanToInt(sub);
                }
                if(s[1] == 'C'){
                    sub = sub.substr(1, sub.length() - 2);
                    return 90 + romanToInt(sub);
                }
            }
            return 10 + romanToInt(sub);
        case 'V':
            return 5 + romanToInt(sub);
        case 'I':
            if(s.length() > 1){
                if(s[1] == 'V'){
                    sub = sub.substr(1, sub.length() - 2);
                    return 4 + romanToInt(sub);
                }
                if(s[1] == 'X'){
                    sub = sub.substr(1, sub.length() - 2);
                    return 9 + romanToInt(sub);
                }
            }
            return 1 + romanToInt(sub);
    }
    return 0;
}