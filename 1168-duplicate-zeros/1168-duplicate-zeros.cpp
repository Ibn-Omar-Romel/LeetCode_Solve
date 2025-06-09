class Solution {
public:
    void duplicateZeros(vector<int>& arr) {

        int n = arr.size();
        vector<int>vec(n);

        int i = 0, j = 0;
        while(i < n) {
            if (arr[j] == 0) {
                vec[i] = 0;
                if (i+1 < n)
                    vec[i+1] = 0;
                i += 2;
            }
            else {
                vec[i] = arr[j];
                i++;
            }
            j++;
        }
        arr = vec;
    }
};