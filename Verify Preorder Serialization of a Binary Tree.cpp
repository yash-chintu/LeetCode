class Solution {
public:
    bool isValidSerialization(string preorder) {
        stringstream ss(preorder);
        string temp;
        int nodes=1;
        while(getline(ss,temp,',')){
            nodes--;
            if(nodes<0)return false;
            if(temp!="#")
                nodes+=2;
        }
        return nodes==0;
    }
};
