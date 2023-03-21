https://www.codingninjas.com/codestudio/problems/football-game_759413?leftPanelTab=3



#include <bits/stdc++.h> 
long long footballGame(vector<int> &vacantSeats, int m, int n) {
    long long int max = INT_MIN;
    long long int profit = 0;
    while(n>0){
        for(int i = 0; i < vacantSeats.size(); i++){
            if(max < vacantSeats[i]){
                max = vacantSeats[i];
            }
        }

        for(int i = 0; i < vacantSeats.size(); i++){
              if (max == vacantSeats[i]) {
                vacantSeats[i] = vacantSeats[i] - 1;
                break;
            }
        }
        

        profit += max;
        
        n--;
        max = 0;
    }
    return profit;
}
