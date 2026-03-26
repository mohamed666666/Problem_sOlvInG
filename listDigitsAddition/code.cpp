class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int l=digits.size()-1;
        while(digits[l]==9){
            digits[l]=0;
            l--;
            if(l<0){
                break;
            }
        }
        if (digits[0]==0 &&l<0){
            digits.insert(digits.begin(),1);
        }
        else{
            digits[l]++;
        }
        return digits;
    }
};
