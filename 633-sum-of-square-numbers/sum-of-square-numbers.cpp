class Solution {
public:
    bool judgeSquareSum(int c) {
        int mid=sqrt(c);
        int sum;
        bool flag=false;
        for(int i=0;i<=mid;i++){
            sum=i*i;
            int left=c-sum;
            int next=sqrt(left);
            if(next*next==left){
                flag=true;
                break;
            }
        }
        return flag;
    }
};