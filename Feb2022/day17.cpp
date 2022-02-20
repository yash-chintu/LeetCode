class Solution
{
public:
    map<vector<int>, bool> ans;
    void compute(vector<int> c, int target, int val, vector<int> so_far)
    {
        for (int i = 0; i < c.size(); i++)
        {
            if (val + c[i] < target)
            {
                vector<int> temp = so_far;
                temp.push_back(c[i]);
                compute(c, target, val + c[i], temp);
            }
            else if (val + c[i] == target)
            {
                vector<int> temp = so_far;
                temp.push_back(c[i]);
                sort(temp.begin(), temp.end());
                ans[temp] = true;
            }
            else
            {
                return;
            }
        }
        return;
    }
    vector<vector<int>> combinationSum(vector<int> &c, int target)
    {
        sort(c.begin(), c.end());
        vector<int> empty;
        vector<vector<int>> Ans;
        compute(c, target, 0, empty);
        for (auto x : ans)
        {
            Ans.push_back(x.first);
        }
        return Ans;
    }
};