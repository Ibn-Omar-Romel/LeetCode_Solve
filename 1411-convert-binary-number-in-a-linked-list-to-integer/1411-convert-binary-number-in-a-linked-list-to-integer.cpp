#pragma GCC optimize("Ofast")
static auto _ = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    return nullptr;
}();

class Solution {
public:
    int getDecimalValue(ListNode* head) {

        string st = "";
        ListNode* current = head;
        while (current != NULL) {
            st += to_string(current->val);
            current = current->next;
        }

        int value = 0;
        for (int i = 0, j = st.size() - 1; j >= 0; j--, i++) {

            if (st[j] == '1') {
                value += pow(2, i);
            }
        }

        return value;
    }
};