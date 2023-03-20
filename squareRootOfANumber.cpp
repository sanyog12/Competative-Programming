https://leetcode.com/problems/sqrtx/submissions/918925089/


// Complexity: log(n)

class Solution {
    public:
    long long int mySqrt(int x) {
        if(x == 0 || x == 1){
            return x;
        }
        int s = 0;
        int e = x;
        long long int ans = -1;
        long long int mid = s + (e-s)/2;
        while(s <= e){
            long long int product = mid * mid;
            if((product) <= x){
                ans = mid;
                s = mid + 1;
            }
            else{
                e = mid-1;
            }
            mid = s + (e -s) / 2;
        }
        return ans;
    }

};