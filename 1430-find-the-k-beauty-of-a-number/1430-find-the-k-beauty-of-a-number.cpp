class Solution {
public:
    int divisorSubstrings(int num, int k) {
        
        string s = to_string(num);
        int count = 0;
        for (int i = 0; i < s.size()-k+1; i++) {
            string st = s.substr(i, k);
            int value = stoi(st);

            if (value != 0 and num % value == 0)
                count++;
        }
        return count;
    }
};