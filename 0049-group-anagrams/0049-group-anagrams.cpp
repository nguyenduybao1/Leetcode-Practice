class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        unordered_map<string, vector<string>> mp;

        for(int i = 0; i < strs.size(); i++){
            string s = strs[i];
            string key = s;

            sort(key.begin(), key.end());
            
            mp[key].push_back(s);
        }
        vector<vector<string>> res;

        for(auto it = mp.begin(); it != mp.end(); it++){
            res.push_back(it -> second);
        }
       return res;
    }
};

/*



class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        unordered_map<string, vector<string>> mp;

        for (string s : strs) {
            int cnt[26] = {0};

            // Đếm tần suất ký tự
            for (char c : s) {
                cnt[c - 'a']++;
            }

            // Tạo key từ frequency
            string key = "";
            for (int i = 0; i < 26; i++) {
                key += "#" + to_string(cnt[i]);
            }

            mp[key].push_back(s);
        }

        vector<vector<string>> res;
        for (auto& p : mp) {
            res.push_back(p.second);
        }

        return res;
    }
};

*/