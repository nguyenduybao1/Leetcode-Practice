class Solution {
public:
    string simplifyPath(string path) {
        vector<string> st;
        string token;
        stringstream ss(path);

        while(getline(ss, token, '/')){
            if(token == "" || token == "."){
                continue;
            }
            else if(token == ".."){
                if(!st.empty()) st.pop_back();
            }
            else{
                st.push_back(token);
            }
        }
        
        string res = "/";
        for (int i = 0; i < st.size(); i++) {
            res += st[i];
            if (i + 1 < st.size()) res += "/";
        }

        return res;
    }
};