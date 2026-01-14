
#include <iostream>
#include <vector>
#include <map>
#include <string>
#include<algorithm>
using namespace std;


int main() {
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n ; i++){
        cin>>a[i];
    }
    map<int,int> freq;
    for(int i : a){
        freq[i]+=1;
    }
    int max_freq = 0;
    for (auto &p : freq) {
        max_freq = max(max_freq, p.second);
    }
    cout<< n - max_freq;
    
}



