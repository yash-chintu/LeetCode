class Solution
{
public:
    string removeKdigits(string num, int k)
    {
        while (k > 0)
        {
            bool plug = false;
            for (int i = 1; i < num.length(); i++)
            {
                if (num[i - 1] - '0' > num[i] - '0')
                {
                    num.erase(i - 1, 1);
                    plug = true;
                    break;
                }
            }
            if (!plug)
            {
                num.erase(num.length() - 1, 1);
            }

            k--;
        }
        while (num[0] == '0')
        {
            num.erase(0, 1);
        }
        if (!num.length())
            return "0";
        return num;
    }
};