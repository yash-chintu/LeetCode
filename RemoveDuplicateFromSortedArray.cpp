class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
     int n=nums.size();
        if(n==1||n==0)
            return n;
        int temp=nums[0];
        int i=1;
        while(i<n)
        {
            if(nums[i]==temp){
                nums.erase(nums.begin()+i);
                n--;
            }
            else{
                temp=nums[i];
                i++;
            }
        }
        return n;
    }
};
