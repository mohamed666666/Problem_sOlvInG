#include <unordered_map>
#include <stack> 
class Solution {
public:
    bool isValid(string s) {
        unordered_map<char,char> dic;
        dic['(']=')';
        dic['{']='}';
        dic['[']=']';
        int len=s.size();
        stack<char> stak;
        for(int i =0;i<len;i++){
            if ((!stak.empty())&&(dic[stak.top()]==s[i])){
                stak.pop();
                continue;
            }
            stak.push(s[i]);
        }

        return stak.empty();
    }
};
