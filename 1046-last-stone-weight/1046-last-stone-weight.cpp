class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
     sort(stones.begin(), stones.end(), greater<int>());
        int i = 0;
        while (i<stones.size() && (i+1)<stones.size()){
            int res = stones[i] - stones[i+1];
            if (res != 0){
                stones.erase(stones.begin());
                stones[0] = res;
                sort(stones.begin(), stones.end(), greater<int>());
            }
            else{
                stones.erase(stones.begin(), stones.begin()+2);
            }
        }
        if (stones.size()){
            return stones[0];
        }
        return 0;   
    }
};