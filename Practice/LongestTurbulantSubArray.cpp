class Solution {
public:
    int maxTurbulenceSize(vector<int>& arr) {
        int n=arr.size();
        if(n==0||n==1)
            return n;
        int maxT=1,temp=1;
        bool nextGreater=true,nextSmaller=true;
        for(int i=1;i<n;i++){
            if(arr[i]>arr[i-1]&&nextGreater){
                temp++;
                nextGreater=false;
                nextSmaller=true;
            }
            else if(arr[i]<arr[i-1]&&nextSmaller){
                temp++;
                nextGreater=true;
                nextSmaller=false;
            }
            else{
                if(temp>maxT){
                    maxT=temp;
                }
               
                //i--;
               // cout<<arr[i]<<endl<<arr[i-1]<<endl;
                temp=1;
                 if(arr[i]!=arr[i-1])
                    i--;
                nextGreater=true,nextSmaller=true;
            }
        }
        if(temp>maxT)
            maxT=temp;
        return maxT;
    }
};
