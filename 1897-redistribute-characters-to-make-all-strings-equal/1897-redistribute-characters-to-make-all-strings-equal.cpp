class Solution {
public:
    bool makeEqual(vector<string>& words) {
        int arr[26] = {0};
        int n = words.size();
        for (string &word : words) {
            for (char ch : word) {
                arr[ch-'a']++;
            }
        }

        for (int i = 0; i < 26; i++) {
            if (arr[i] % n != 0) {
                return false;
            }
        }

        return true;
    }
};