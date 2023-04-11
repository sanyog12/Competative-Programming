https://leetcode.com/problems/fizz-buzz/description/




class Solution {
public:
    vector<string> fizzBuzz(int n) {

        vector<string> v;

        int start = 1;

        for(int i = 0; i < n; i++){

            if(start % 3 == 0 && start % 5 == 0){

                v.push_back("FizzBuzz");

            }
            else if(start % 3 == 0){

                v.push_back("Fizz");

            }
            else if(start % 5 == 0){

                v.push_back("Buzz");
                
            }
            else{

                v.push_back(to_string(start));

            }

            start++;

        }
        
        return v;
    }
};