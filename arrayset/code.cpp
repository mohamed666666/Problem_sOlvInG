

#include <iostream>
#include <set>
using namespace std;

int main()
{
    int test, n;
    cin >> test;

    while (test--)
    {
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        set<int> s(a,a+n);
        if(s.size()<n){
            cout<<"ne krasivo\n";
        }
        else{
            cout<<"prekrasnyy\n";
        }

    }

    return 0;
}
