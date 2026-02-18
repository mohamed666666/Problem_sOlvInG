// Online C++ compiler to run C++ program online
#include <iostream>
#include<algorithm>
#include<stack>
#include<queue>
using namespace std;
int main() {
    // Write C++ code here
    int n,c=0;
    cin>>n;
    
    int cmd,container;
    deque<int> myDeque;
    priority_queue<int, std::vector<int>, std::greater<int>> pq;
    while(c<n){
        cin>>cmd;
        if (cmd ==1){
            cin>>container;
            myDeque.push_back(container);
         
        }
        if(cmd==2){
            if(!pq.empty()){
                cout<<pq.top()<<endl;
                pq.pop();

            }
            else{
                cout<<myDeque.front()<<endl;
                myDeque.pop_front();
            }
                
            
        }
        if(cmd==3){
            while(!myDeque.empty()){
                pq.push(myDeque.front());
                myDeque.pop_front();
            }
            
        }
        c++;
    }

   
    

    return 0;
}