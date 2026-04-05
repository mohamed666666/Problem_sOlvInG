class Solution {
public:
    int mySqrt(int x) {
        double count=2;
        if(x<2){
            return x;
        }
        while( count*count <=x){
            count++;
        }
        
        return count-1;
    }
};
