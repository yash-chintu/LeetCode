class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>M;
        M[0] = 1;
        int sum = 0;
        int count = 0;
        for(int a : nums)
        {
            sum += a;
            if(M.find(sum - k) != M.end())
                count += M[sum - k];
            M[sum]++;
        }
        return count;
    }
};