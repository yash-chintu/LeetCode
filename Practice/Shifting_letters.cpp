class Solution {
public:
    string shiftingLetters(string s, vector<int>& shifts) {
     int n=shifts.size();
        if(n==0)
            return s;
        for(int i=0;i<n;i++){
            shifts[i]=shifts[i]%26;
        }
        vector<int> shift;
        int count=shifts[n-1];
        int i=2;
        while(i<=n){
            shift.push_back(count);
            count+=shifts[n-i];
            i++;
        }
        shift.push_back(count);
        for(i=0;i<n;i++){
            int temp=int(s[i]);
            temp-=97;
            temp+=shift[n-i-1];
            temp=temp%26;
            s[i]=char(temp+97);
        }
        return s;
    }
};
