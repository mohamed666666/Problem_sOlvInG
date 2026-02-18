// Online C++ compiler to run C++ program online
#include <iostream>
#include <queue>
using namespace std;
int main() {
    // Write C++ code here
    int n,c=0;
    cin>>n;
    queue<int> que;
    int input;
    while(c<n){
        int cmd;
        cin>>cmd;
        if (cmd ==1){
            cin>>input;
            que.push(input);
        }
        if(cmd==2){
            que.pop();
        }
        if(cmd==3){
            cout<<que.front()<<'\n';
        }
        c++;
    }

    return 0;
}
