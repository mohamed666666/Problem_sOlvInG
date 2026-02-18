#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n,cl,c=0;
    cin >> n;

    vector<int> container;
    while(c<n){
        cin>>cl;
        vector<int> temp(cl);
        for(int i=0;i<cl;i++){
            cin>>temp[i];
        }
        for(int i : temp){
            cout<<i<<" | ";
        }

        c++;
    }

    return 0;
}