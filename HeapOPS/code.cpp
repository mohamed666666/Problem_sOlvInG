












#include <iostream>
#include <vector>
#include <queue>
#include <string>
using namespace std;

struct Query {
    string command;
    int number;
    bool hasNumber;
};

int main() {
    int n;
    cin >> n;
    vector<Query> db;
    for (int i = 0; i < n; i++) {
        string cmd;
        cin >> cmd;
        if (cmd == "insert" || cmd == "getMin") {
            int x;
            cin >> x;
            db.push_back({cmd, x, true});
        } else {
            db.push_back({cmd, 0, false});
        }
    }

    priority_queue<int, vector<int>, greater<int>> heap;
    vector<Query> ops;

    for (auto &q : db) {
        if (q.command == "insert") {
            heap.push(q.number);
            ops.push_back(q);
        }
        else if (q.command == "getMin") {
            int x = q.number;
            // Remove smaller elements
            while (!heap.empty() && heap.top() < x) {
                heap.pop();
                ops.push_back({"removeMin", 0, false});
            }
            // Ensure top == x
            if (heap.empty() || heap.top() > x) {
                heap.push(x);
                ops.push_back({"insert", x, true});
            }
            ops.push_back({"getMin", x, true});
        }
        else { // removeMin
            if (heap.empty()) {
                // need to insert dummy
                heap.push(0);
                ops.push_back({"insert", 0, true});
            }
            heap.pop();
            ops.push_back({"removeMin", 0, false});
        }
    }

    cout << ops.size() << "\n";
    for (auto &op : ops) {
        if (op.hasNumber)
            cout << op.command << " " << op.number << "\n";
        else
            cout << op.command << "\n";
    }
    return 0;
}







/*
#include <iostream>
#include <vector>
#include <algorithm>
#include<map>
#include <string>
#include<queue>
using namespace std;


struct Query{
    string command;
    int number;

};

int main()
{
    int n;
    cin >> n;
    vector<Query> db;
    priority_queue<int, std::vector<int>, std::greater<int>> min_heap_int;
    while(n--){
       string comand;
       cin>>comand;
       int num;
       if(comand=="insert" || comand=="getMin"){
        cin>>num;
        db.push_back({comand,num} );
       }   
       else{
        db.push_back({comand});
       }
    }

    for (auto const qq:db){
        if(qq.command=="insert"){
             min_heap_int.push(qq.number);
             //cout<<"form pushing to heap "<< qq.number<<endl;
        }
       
    }
    
    vector<Query> operations;
    for(auto const q:db){
        if (q.command=="removeMin"){
            //cout<<q.command<<"\n";
            operations.push_back({q.command});
            min_heap_int.pop();
        }
        else{
            
            if(q.command=="getMin" && q.number>min_heap_int.top()){
                while(!min_heap_int.empty()){
                    if(min_heap_int.top()<=q.number){
                   // cout<<"removeMin\n";
                    operations.push_back({"removeMin"});
                    min_heap_int.pop();
                    }
                    else{
                        break;
                    }
                }
                //cout<<"insert "<<q.number<<"\n";
                operations.push_back({"insert",q.number});
                min_heap_int.push(q.number);
                //cout<<"getMin "<<q.number<<"\n";
                operations.push_back({"getMin",q.number});
                
            }
            
            else if(q.command=="insert"){
                //cout<<q.command<<" "<<q.number<<"\n";//printing insert number 
                operations.push_back({"insert",q.number});
            }
        }
  
    }
    cout<<operations.size()<<"\n";
    for(auto const op : operations){
        if(op.command=="removeMin"){
            cout<<"removeMin\n";
        }
        else{
            cout<<op.command<<" "<<op.number<<"\n";
        }
    }
        
    return 0;
}
*/