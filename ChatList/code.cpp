#include <iostream>
#include <queue>   // for priority_queue
#include <string>
#include <set>
using namespace std;

struct Friend {
    string name;
    int priority;

    bool operator<(const Friend& other) const {
        return priority < other.priority; // higher priority = larger number
    }
};

int main() {
    string s;
    priority_queue<Friend> chat_list;
    int n, c = 0;
    cin >> n;

    while (c < n) {
        cin >> s;
        chat_list.push({s, c}); // c as priority
        c++;
    }
    set<string> temp;
    // Print elements in priority order
    while (!chat_list.empty()) {
        Friend f = chat_list.top();
         chat_list.pop();
        if (temp.count(f.name) > 0){
            continue;
        }
        temp.insert(f.name);
        cout << f.name << "\n";
    }

    return 0;
}
