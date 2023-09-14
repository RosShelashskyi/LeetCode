#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {

    

    double result;
    return result;
}

int main(){
    vector<int> nums1;
    nums1.push_back(1);
    nums1.push_back(3);
    nums1.push_back(5);
    vector<int> nums2;
    nums2.push_back(2);
    nums2.push_back(4);
    nums2.push_back(6);
    double median = findMedianSortedArrays(nums1, nums2);
    cout << median << endl;
    return 0;
}