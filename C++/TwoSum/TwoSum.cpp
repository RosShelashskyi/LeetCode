#include <iostream>
#include <vector>
#include <map>
/*
std::vector<int> twoSum(std::vector<int>& nums, int target){
    std::vector<int> sumVector;
    for(int i = 0; i < nums.size(); i++){
        for(int j = 0; j < nums.size(); j++){
            if(i == j) continue;
            if(nums.at(i) + nums.at(j) == target){
                sumVector.push_back(i);
                sumVector.push_back(j);
                return sumVector;
            }
        }
    }
    return sumVector;
}
*/

std::vector<int> twoSum(std::vector<int>& nums, int target){
    std::map<int, int> mp;
    for(int i = 0; i < nums.size(); i++){
        if(mp.find(target - nums[i]) == mp.end()) mp[nums[i]] = i;
        else return {i, mp[target - nums[i]]};
    }
    return {};
}

int main(){
    std::vector<int> nums;
    nums.push_back(2);
    nums.push_back(7);
    nums.push_back(11);
    nums.push_back(15);

    std::vector<int> result = twoSum(nums, 9);

    std::cout << "[" << result.at(0) << ", " << result.at(1) << "]." << std::endl;
    return 0;
}

