class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k=nums.size();
        bool prev=false;
        for(int i=1;i<k;i++){
            if(nums[i]==nums[i-1]){
                if(prev){
                    nums.erase(nums.begin()+i);
                    k--;
                    i--;
                }
                else{
                    prev=true;
                }
            }
            else{
                prev=false;
            }
        }
        return k;
    }
};