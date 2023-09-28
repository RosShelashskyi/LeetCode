//ACCEPTED
//RUNTIME - 0 ms, beats 100%
//MEMORY - 9.38 MB, beats 41.82% 
#include <iostream>
#include <string>
#include <vector>
using namespace std;

//finds the longest common prefix from an array of strings
string longestCommonPrefix(vector<string>& strs){
    string prefix = "";                                         //return value
    for(int i = 0; i < strs.at(0).length(); i++){               //loop to iterate through characters of each string
        char temp = strs.at(0)[i];                              //character from first string for comparison
        bool isDifferent = false;                               //bool for breaking out of the main loop;
        for(int j = 0; j < strs.size(); j++){                   //iterate through each string in the array
            if(strs.at(j).length() <= i){                       //safety check so we don't run out of bounds when checking strings that are shorter than the first one
                isDifferent = true;                             //break out of the main loop if the string is too short        
                break;                                          //break out of the subloop
            }
            if(temp != strs.at(j)[i]) isDifferent = true;       //set to true if the chars don't match
        }
        if(isDifferent) break;                                  //break out if the chars don't match

        prefix += temp;                                         //add char to prefix otherwise
    }
    return prefix;
}