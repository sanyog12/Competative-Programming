https://leetcode.com/problems/ransom-note/description/


#include <string>
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {

        int m = 0, r = 0;

        while(magazine.length() > m){

        if(ransomNote[r] != magazine[m]){

            m++;

        }

        if(ransomNote[r] == magazine[m]){

            r++;
            m++;

        }

        }

        cout<<ransomNote.length()+1<<" "<<r;
        
        return r == (ransomNote.length() + 1);
    }
};