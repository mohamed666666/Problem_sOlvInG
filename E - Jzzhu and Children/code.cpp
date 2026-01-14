// Online C++ compiler to run C++ program online
#include <iostream>
#include <queue>
#include <utility> 
using namespace std;
int main() {
    // Write C++ code here
    int n ,m;
    cin>>n >>m;
    queue<pair<int,int>> que;
    int t;
    for (int i=0;i<n;i++){
        cin>>t;
        que.push({t,i});
        
    }
    pair<int,int> t2;
    int lastindex;
    while(!(que.empty())){
        t2=que.front();
        if(m-t2.first<=1){
            que.pop();
            lastindex=t2.second;
        }
        else{
            que.pop();
            t2.first-=m;
            que.push(t2);
        }
    }
    cout<<lastindex;

    return 0;
}
