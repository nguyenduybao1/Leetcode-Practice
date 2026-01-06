class Solution {
public:
   string longestCommonPrefix(vector<string>& strs) {
    /* if (strs.empty()) return "";  
    Required only if input strs.length = 0 (not needed for this problem's constraints) 
    NOTE TO SELF: remember to add this check in problems where input array can be empty.
    */

    for (int i = 0; i < strs[0].size(); i++) {
        char c = strs[0][i];

        for (int j = 1; j < strs.size(); j++) {
            if (i >= strs[j].size() || strs[j][i] != c) {
                return strs[0].substr(0, i);
            }
        }
    }
    return strs[0];
}

};