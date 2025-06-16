class Solution {
public:
    int findTheWinner(int n, int k) {
        vector<int>vec(n);
        for (int i = 1; i <= n; i++) {
            vec[i-1] = i;
        }

        int i = 0;
        while(vec.size() != 1) {
            int position = (i+k-1) % vec.size();
            cout << position << " ";
            vec.erase(vec.begin()+position);

            i = position;
        }   
        return vec[0];
    }
};