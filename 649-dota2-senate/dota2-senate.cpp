class Solution {
public:
    string predictPartyVictory(string senate) {
        queue<int> radiant;
        queue<int> dier;
        int len=senate.size();
        for(int i=0;i<len;i++){
            if(senate[i]=='R'){
                radiant.push(i);
            }
            else{
                dier.push(i);
            }
        }
        int r,d;
        while(!radiant.empty() && !dier.empty()){
            r=radiant.front();
            radiant.pop();
            d=dier.front();
            dier.pop();
            if(r<d){
                radiant.push(r+len);
            }
            else{
                dier.push(d+len);
            }
        }
        if(!radiant.empty()){
            return "Radiant";
        }
        else{
            return "Dire";
        }
    }
};