
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    map<int, int> freqs;
    map<int, int> db;
    int q, num;
    while (n--)
    {
        cin >> q >> num;

        if (q == 1)
        {
            int old_freq = db[num]; // 2
            if (old_freq > 0)
            {
                freqs[old_freq]--; // Remove from old bucket
            }

            db[num]++;        // Increment number's frequency (now 3)
            freqs[db[num]]++; // Add to new bucket
        }
        else if (q == 2)
        {
            int old_freq = freqs[db[num]];
            if (old_freq > 0)
            {
                freqs[db[num]]--;
                db[num]--;
                if (db[num] > 0)
                {
                    freqs[db[num]]++;
                }
            }
        }
        else
        {
            int out = 0;
            if (freqs[num] > 0)
            {
                out = 1;
            }
            cout << out << "\n";
        }
    }

    return 0;
}

// OLD SOLUTION
/*

#include <vector>
 #include <map> #include<set>
  #include<algorithm> using namespace std;
  int main()
  { int n; cin >> n;
    set<int> freqs;
    map<int,int>db;
    int q,num;
    while(n--){
     cin>>q>>num;
     if(q==1)
     { db[num]++; freqs.insert(db[num]); }
       else if(q==2){ db[num]--;
       freqs.insert(db[num]); }
       else{
       int out=0;
        if(freqs.find(num)!=freqs.end())
        { out=1; }
         cout<<out<<"\n"; } }

        return 0; }

*/