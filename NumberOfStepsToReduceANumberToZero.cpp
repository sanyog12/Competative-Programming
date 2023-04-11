https://leetcode.com/problems/number-of-steps-to-reduce-a-number-to-zero/description/






class Solution {
public:
    int numberOfSteps(int num) {

        long long int s = 0;

        while(num > 0){

            if(num % 2 == 0){

                num = num / 2;
                s++;

            }

            else{

                num = num - 1;
                s++;

            }
        }

        return s;
        
    }
};