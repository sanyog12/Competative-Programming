https://leetcode.com/problems/search-insert-position/description/














class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {

        int s = 0;
        int e = nums.size() - 1;
        bool isFound = 0;

        while(s<=e){

            int mid = s + (e-s)/2;

            if(nums[mid] == target){

                return mid;

            }

            else if(nums[mid] > target){

                e = mid -1;

            }
            
            else{

                s = mid + 1;

            }
        }
        
        return s;

    }
};