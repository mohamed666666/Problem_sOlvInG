class Solution {
public:
    int strStr(string haystack, string needle) {
        int l=needle.length();
        if(l==0){
            return 0;
        }
        if(l>haystack.length()){
            return -1;
        }
        string sub;
        for (int i=0;i<=haystack.length()-l;i++){
            sub=haystack.substr(i,l);
            if (sub==needle){
                return i;
            }
        }
        return -1;
    }
};
