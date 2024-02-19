int canCompleteCircuit(int* gas, int gasSize, int* cost, int costSize){
    int tsum=0,sum=0,index=0;
    for(int i=0;i<gasSize;++i){
        int val=*(gas+i)-*(cost+i);
        tsum=tsum+val;
        sum=sum+val;
        if(sum<0){
            sum=0;
            index=i+1;
        }
    }
    if(tsum<0){
        return -1;
    }
    else{
        return index;
    }
}