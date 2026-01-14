// Online C++ compiler to run C++ program online
#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main() {
    // Write C++ code here
    string str;
    cin>>str;
    stack<char> s;
    for(char c :str){
        if(s.empty() or s.top()!=c){
            s.push(c);
        }
        else{
            s.pop();
        }
    }
    
    if( s.empty()){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }

    return 0;
}
