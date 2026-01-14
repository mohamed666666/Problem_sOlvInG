
// Online C++ compiler to run C++ program online
#include <iostream>
#include <set>
#include <string>
#include <map>

using namespace std;
int main() {
    // Write C++ code here
    int n,c=0;
    cin>>n;
    map<string,int> m;
    string inp;
    while(c<n ){
        cin>>inp;
        auto it=m.find(inp);
        if ( it !=m.end()){
             it->second+=1;
             cout<<inp<<it->second<<"\n";
        }
        else{
            m.insert({inp,0});
            cout<<"OK\n";
        }
        
        c++;
    }

    return 0;
}
