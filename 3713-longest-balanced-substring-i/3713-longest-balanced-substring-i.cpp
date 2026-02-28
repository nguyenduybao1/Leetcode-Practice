class Solution {
public:
    int longestBalanced(string s) {
        int n = s.size();
        int ans = 1;

        for (int left = 0; left < n; left++) {
            int freq[26] = {0};
            int distinct = 0;
            int maxFreq = 0;
            int cntMax = 0;

            for (int right = left; right < n; right++) {
                int c = s[right] - 'a';
                int f = ++freq[c];

                if (f == 1) distinct++;

                if (f > maxFreq) {
                    maxFreq = f;
                    cntMax = 1;
                } else if (f == maxFreq) {
                    cntMax++;
                }

                if (distinct == cntMax) {
                    ans = max(ans, right - left + 1);
                }
            }
        }
        return ans;
    }
};
