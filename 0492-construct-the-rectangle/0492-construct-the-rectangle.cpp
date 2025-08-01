class Solution {
public:
    vector<int> constructRectangle(int area) {
        int n = area / 2;
        for (int i = 1; i <= n; i++) {
            
            int l = i, r = area / l;
            if (l >= r and l * r == area) {
                return {l, r};
            }
        }
        return {area, 1};
    }
};