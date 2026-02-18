// Online C++ compiler to run C++ program online
#include <iostream>
#include <stack> 
#include <string>
#include <map>
int main() {
    // Write C++ code here
    int n,c=0;
    std::cin>>n;
    std::string str;
    
    std::map<char, char> eq={{'(',')'},{'{','}'},{'[',']'}}; 
    
    while(c<n){
        std::cin>>str;
        std::stack<char> stk;
        for (int i=0;i<(str.size());i++){
            if(i < str.size()/2){
                stk.push(str[i]);
                //std::cout<<str[i]<<std::endl;
            }
            if(i>=str.size()/2){
                //std::cout<<str[i]<<"stack top "<<stk.top()<<std::endl;
                if(str[i]==eq[stk.top()]){
                    stk.pop();
                }
            }
        }
        if(stk.empty()){
            std::cout<<"YES\n";
        }
        else{
            std::cout<<"NO\n";
        }
        
        c++;
    }
    

    return 0;
}
