// Online C++ compiler to run C++ program online
#include <iostream>
#include <set>
#include <string>
using namespace std;
int main() {
    // Write C++ code here
    string str;
    cin>>str;
    set<char> st (std::begin(str), std::end(str));
    if(st.size()%2==0){
        cout<<"CHAT WITH HER!"<<endl;
    }
    else{
        cout<<"IGNORE HIM!"<<endl;
    }
    return 0;
}
