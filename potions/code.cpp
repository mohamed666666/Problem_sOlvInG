#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n, min = 0;
    cin >> n;

    int helath = 0;
    int npotions = 0;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    for (int i = 0; i < n; i++)
    {
       if(v[i]>0){
        helath+=v[i];
        npotions++;
       }
       else{
        if(helath+v[i]>0){
            helath+=v[i];
            npotions++;
            min=v[i];
        }
        else{
            helath-=min;
            if(helath>0){
                npotions++;
                helath+=v[i];
            }
        }

       }
    }
    cout << npotions << endl;

    return 0;
}