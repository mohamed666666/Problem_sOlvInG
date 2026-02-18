#include <iostream>
#include <vector>
#include <algorithm>
#include<map>
using namespace std;

int main()
{
    int n,cl,c=0;
    cin >> n;

    vector<int> container;
    map<int,int> ma;
    while(c<n){
        cin>>cl;
        int tempi;
        for(int i=0;i<cl;i++){
            cin>>tempi;
            if (ma.count(tempi)>0){
                ma[tempi]+=1;
            }
            else{
                ma[tempi]=1;
            }
        }

        for (const auto& pair : ma) {
         container.push_back(pair.second);
    } 
        int muin=__INT_MAX__;
        for(int i=0;i<container.size();i++){
            int sum=0;
            for (int j =0 ;j<container.size();j++){
                if (i==j){
                    continue;
                }
                if(container[i] < container[j]){
                    sum+=(container[j]-container[i]);
                }
                else if (container[i]==container[j]){
                    continue;
                }
                else{
                    sum+=container[j];
                }
            }
            muin=min(sum,muin);

        }
        cout<<" Output"<<muin<<"\n";
        
        c++;
    }

    return 0;
}