#include<iostream>
#include<utility>
#include<algorithm>
using namespace std;


int main()
{
    #ifndef ONLINE_JUDGE
    freopen("hackin.txt", "r", stdin);
    freopen("hackout.txt", "w", stdout);
    #endif
    
    pair <int, int> P[5];
    
    for(int i=0; i<5; i++) {
        int x, y;
        cin >> x >> y;
        P[i].first = x;
        P[i].second = y;
    }

    for(int i=0; i<5; i++) {
        cout << P[i].first << " " << P[i].second << endl;
    }

}
