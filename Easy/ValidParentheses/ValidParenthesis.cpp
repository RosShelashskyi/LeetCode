//ACCEPTED
//RUNTIME - 3 ms, beats 44.76%
//MEMORY - 6.62 MB, beats 13.51%
//Needs optimization
#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool isValid(string s){
    vector<char> stack;                             //using a vector to push and pop open parentheses to/from the stack
    int paren = 0;                                  //variables to keep count of parentheses, curved brackets, and square brackets
    int curved = 0;
    int square = 0;
    for(int i = 0; i < s.length(); i++){
        switch(s.at(i)){
            case '(':
                stack.push_back('(');
                paren++;
                break;
            case '{':
                stack.push_back('{');
                curved++;
                break;
            case '[':
                stack.push_back('[');
                square++;
                break;
            case ')':
                if(stack.empty() || stack.back() != '(') return false;
                paren--;
                stack.pop_back();
                break;
            case '}':
                if(stack.empty() || stack.back() != '{') return false;
                curved--;
                stack.pop_back();
                break;
            case ']':
                if(stack.empty() || stack.back() != '[') return false;
                square--;
                stack.pop_back();
                break;
        }
    }
    return (paren == 0 && curved == 0 && square == 0);
}

int main(){
    cout << "Enter a set of parentheses: " << endl;
    string s;
    cin >> s;
    cout << "isValid: " << isValid(s) << endl;
    return 0;
}