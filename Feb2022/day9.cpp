class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        map<int,int>mp;
        map<pair<int,int>,bool> pairs;
        
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(mp[k+nums[i]]){
                if(!pairs[{nums[i],k+nums[i]}]&&!pairs[{k+nums[i],nums[i]}])
                {
                    cout<<nums[i]<<endl;
                    if(k==0){
                        if(mp[nums[i]]<=1){
                            continue;
                        }
                    }
                    pairs[{nums[i],k+nums[i]}]=true;
                    count++;
                }
            }
        }
        return count;
    }
};