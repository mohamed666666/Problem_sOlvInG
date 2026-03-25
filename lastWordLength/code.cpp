class Solution {
public:
    int lengthOfLastWord(string s) {
        int counter=0;
        int last=0;
        int spaces=0;
        for(int i=0;i<s.length();i++){
          
            if(s[i]==' '){
                if(spaces>0 ){
                    counter=0;
                    continue;
                }
                last=counter;
                counter=0;
                spaces++;
            }
            else{
                spaces=0;
                counter++;
            }

        }
        if(counter){
            return counter;
        }
        return last;
        
    }
};
