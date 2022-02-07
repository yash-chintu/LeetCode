class Solution
{
public:
    char findTheDifference(string s, string t)
    {
        unordered_map<char, int> mp;

        for (int i = 0; i < s.length(); i++)
        {
            mp[s[i]]++;
        }
        for (int j = 0; j < t.length(); j++)
        {
            if (!mp[t[j]])
                return t[j];
            else
                mp[t[j]]--;
        }
        return ' ';
    }
};