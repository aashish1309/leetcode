class Solution {
public:
    string makeGood(string s) {
        stack<char> st;
        int i=0;
        while(i<s.size()){
            if(!st.empty() && ((st.top()==s[i]+32) || (st.top()==s[i]-32))){
                st.pop();
            }
            else
            st.push(s[i]);
            i++;
        }

        string ans="";
        while(!st.empty()){
            ans=st.top()+ans;
            st.pop();
        }

        return ans;
    }
};