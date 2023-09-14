//SOLVED
//7 ms runtime, beats 95.94%
//11.2 MB memory, beats 15.24% due to using a map. brute force solution gives good memory but worse runtime

#include <iostream>
#include <vector>
#include <map>


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

