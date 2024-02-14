class Solution {
public:
    bool isValid(string s) {
        stack<char> stak;
        int len=s.size();
        for(int i=0;i<len;i++){
            char par=s[i];
            if(par=='(' || par=='{' || par=='['){
                stak.push(par);
            }
        else{
            if(!stak.empty()){
                char top=stak.top();
                if((par==')' && top=='(') || (par=='}' && top=='{')||(par==']'&&top=='[')){
                    stak.pop();
                }
                else{
                    return false;
                }
            }
            else{
                return false;
            }
        }
    }
    if(stak.empty()){
        return true;
    }
    else{
        return false;
    }
    }
};