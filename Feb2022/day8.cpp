class Solution {
public:
    int addDigits(int num) {
        while(num>=10){
            int temp=num;
            num=0;
            while(temp){
                num+=temp%10;
                temp=temp/10;
            }
        }
        return num;
    }
};