class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
    int tsum = 0, sum = 0, index = 0;
    for (int i = 0; i < gas.size(); ++i) {
        int val = gas[i] - cost[i];
        tsum += val;
        sum += val;
        if (sum < 0) {
            sum = 0;
            index = i + 1;
        }
    }
    if (tsum < 0) {
        return -1;
    }
    else {
        return index;
    }
}
};