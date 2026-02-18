

#include <iostream>
#include <vector>
#include <queue>
#include <string>
using namespace std;


int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }

    for (int j=1;j<n;j++){
        arr[j]+=arr[j-1];
    }


    int q;
    cin>>q;
    int f,l;
    while(q--){
        cin>>f>>l;
        if(f==0){
            cout<<arr[l]<<"\n";
        }else{
            cout<<arr[l]-arr[f-1] <<"\n";
        }
        
    }

    return 0;
}