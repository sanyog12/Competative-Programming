https://leetcode.com/problems/container-with-most-water/description/



#include<algorithm>

class Solution {
public:
    int maxArea(vector<int>& height) {

        int left = 0; 
        int right = height.size() - 1;
        int maxArea = 0;

        while(left < right){

            int leftHeight = height[left];
            int rightHeight = height[right];
            int minHeight = min(leftHeight, rightHeight);
            maxArea = max(maxArea, (minHeight*(right - left)));

            if(leftHeight < rightHeight) left++;

            else right--;

        }

        return maxArea;
    }
};