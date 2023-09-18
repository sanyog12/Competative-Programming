https://leetcode.com/problems/length-of-last-word/description/



class Solution {
    public int lengthOfLastWord(String s) {

      int i = s.length()-1;
      if(i == 1)
      return 1;
      
      while( i >= 0 && s.charAt(i) == ' '){
        i--;
      }
      int count = 0;
      while(i>=0 && s.charAt(i) != ' '){
        count++;
        i--;
      }
      return count;
    }
}