class Solution {
public:
    string reorderSpaces(string text) {
        int countSpace = 0;
        for (char ch : text) {
            if (ch == ' ') {
                countSpace++;
            }
        }

        vector<string>words;
        string word;

        istringstream ss(text);
        while(ss >> word) {
            words.push_back(word);
        }

        int wordNumber = words.size();

        string s = "";
        if (wordNumber == 1) {
            s = words[0] + string(countSpace, ' ');
        }
        else {
            int spaces_between = countSpace / (wordNumber - 1);
            int extra_spaces = countSpace % (wordNumber - 1);

            string middle(spaces_between, ' ');
            for (int i = 0; i < wordNumber; i++) {
                s += words[i];
                if (i != wordNumber-1) {
                    s += middle;
                }
            }
            s += string(extra_spaces, ' ');
        }
        return s;

    }

};