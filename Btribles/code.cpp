// Online C++ compiler to run C++ program online
/*

#include <iostream>
#include<algorithm>
#include<stack>
#include<queue>
using namespace std;



int main() {
    // Write C++ code here
    int n , d;
    cin>>n>>d;
    int a[n];
    for(int i =0;i<n ;i++){
        cin>>a[i];
    }
    int t=0;
    for ( int i =n-1 ; i>=2;i-- ){
        for (int j= i-1;j>1;j-- ){
            if(a[i]-a[j]==d){
                for(int x=j-1;x>=0;x--){
                    if(a[j]-a[x]==d){
                       // cout << "this is Triple "<< a[i]<<" "<<a[j]<<" "<<a[x]<<"\n";
                        t++;
                        break;
                    }
                }
            }
        }
       
    }
    cout<<t<<endl;
    
    return 0;
}
*/



#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    int n, d;
    cin >> n >> d;
    int a[n];
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    unordered_set<int> s(a, a + n);  // Load all elements into a set for O(1) lookups
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (s.count(a[i] + d) && s.count(a[i] + 2 * d)) {
            count++;
        }
    }

    cout << count << endl;
    return 0;
}
