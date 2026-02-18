

#include <iostream>
#include <set>
#include <string>
using namespace std;


int main()
{
    string str;
    cin>>str;

    int arr[str.size()];
    arr[0]=0;
    for(int i =0;i<str.size();i++){
        if(str[i] ==str[i+1]){
            arr[i+1]=1;
        }
        else{
            arr[i+1]=0;
        }
    }
    /*for(int x=0;x<str.size();x++){
        cout<<arr[x]<<" arr is \n";
    }*/
    
    for(int j=1;j<str.size();j++ ){
        arr[j]+=arr[j-1];
    }
    /*for(int x=0;x<str.size();x++){
        cout<<arr[x]<<" presum arr is \n";
    }*/
    
    int qs;
    cin>>qs;
    int l,r;
    while(qs--){
        cin>>l>>r;
        cout<<arr[r-1]-arr[l-1]<<"\n";
    }

    return 0;
}
