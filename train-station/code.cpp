
// Online C++ compiler to run C++ program online
#include <iostream>
#include <set>

#include<vector>
using namespace std;
int main() {
    // Write C++ code here
    int n,c=0;
    cin>>n;
    int ml,md,temp;
    vector<int> vl,vd;
    while(c<n ){
        cin>>md>>ml;
        
        for(int i=0;i<md;i++){
            cin>>temp;
            vd.push_back(temp);
        }
        for(int i=0;i<ml;i++){
            cin>>temp;
            vl.push_back(temp);
        }
        vd.insert(vd.end(), vl.begin(), vl.end());
        set<int> mySet(vd.begin(), vd.end());
        cout<<vd.size()-mySet.size()<<"\n";
        vd.clear();
        vl.clear();
        
        c++;
    }

    return 0;
}
