class Solution {
public:
    int longestBalanced(string s) {
        int n = s.size();
        if(n < 2) return n;

        int ans = 1;
        for(int left = 0; left < n; left++){
            unordered_map<char, int> mp;
            for(int right = left; right < n; right++){
                mp[s[right]]++;
                
                int val = -1;
                bool ok = true;
                for(auto &p : mp){
                    if(val == -1){
                        val = p.second;
                    }else if(p.second != val){
                        ok = false;
                        break;
                    }
                }

                if(ok){
                    ans = max(ans, right - left + 1);
                }
            }
        }
        return ans;
    }
};