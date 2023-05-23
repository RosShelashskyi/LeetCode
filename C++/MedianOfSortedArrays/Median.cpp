#include <vector>
#include <algorithm>
using namespace std;

double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2){
    for(int i = 0; i < nums2.size(); i++){
        nums1.push_back(nums2.at(i));
    }
    sort(nums1.begin(), nums1.end());

    double result;
    if(nums1.size() % 2 == 0){
        result = nums1.at(nums1.size() / 2) + nums1.at(nums1.size() / 2 - 1);
        result /= 2;
    }else{
        result = nums1.at(nums1.size() / 2 + 1);
    }
    return result;
}

int main(){
    return 0;
}