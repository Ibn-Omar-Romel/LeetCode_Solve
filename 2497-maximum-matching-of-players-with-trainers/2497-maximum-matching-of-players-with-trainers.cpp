class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {

        sort(players.begin(), players.end());
        sort(trainers.begin(), trainers.end());

        
        int i = 0, j = 0;
        int match = 0;

        while (i < players.size() and j < trainers.size()) {
            if (players[i] <= trainers[j] ) {
                match++;
                i++, j++;
            }
            else {
                j++;
            }
        }  
        return match;  
    }
};