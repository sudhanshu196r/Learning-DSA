//Given an array of integers nums which is sorted in ascending order, 
//and an integer target, write a function to search target in nums. 
//If target exists, then return its index. Otherwise, return -1.

//You must write an algorithm with O(log n) runtime complexity.

//****Solution*****

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size()-1;
        int mid;
        while(low<=high){
            mid = (low+high)/2;
            if(target==nums.at(mid)){
                return mid;
            }
            else if(target<nums.at(mid))
            {
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return -1;

    }
};

int main()
{
    vector<int> nums;
    int a,target;
    while(cin>>a)
    {
        nums.push_back(a);
    }
    cin>>target;
    Solution obj;
    cout<<obj.search(nums,target);
}