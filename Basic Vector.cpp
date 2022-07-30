#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int main()
{
    #ifndef ONLINE_JUDGE
    freopen("hackin.txt", "r", stdin);
    freopen("hackout.txt", "w", stdout);
    #endif
    
    vector <int> V;
    V.push_back(10); // V[0] = 10
    V.push_back(143); // V[1] = 143

    vector <int> V2(5);

    for(int i=0; i<5; i++) {
        cin >> V2[i];
    }

    //sorting the V2 vector
    sort(V2.begin(), V2.end());

    for(int i=0; i<V2.size(); i++) {
        cout << V2[i] << " ";
    }
    cout << endl;
    //cout << V2.size() << endl;

    //Reversing The sorted V2 Vector
    reverse(V2.begin(), V2.end());

    for(int i=0; i<V2.size(); i++) {
        cout << V2[i] << " ";
    }
    cout << endl;

}
