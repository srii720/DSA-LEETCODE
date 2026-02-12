class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        // i have a gas tank with unlimited gas tank
    int total = 0;      // total net gain
    int tank = 0;       // current tank
    int start = 0;      // candidate start index

    for (int i = 0; i < gas.size(); i++) {
        int gain = gas[i] - cost[i];
        total += gain;
        tank += gain;
        if (tank < 0) {
            start = i + 1;
            tank = 0;
        }
    }
    if (total < 0)
        return -1;

    return start;

        


        
        
    }
};