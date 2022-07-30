#include<iostream>
#include<string>
#include<algorithm>
using namespace std;


int main()
{
    #ifndef ONLINE_JUDGE
    freopen("hackin.txt", "r", stdin);
    freopen("hackout.txt", "w", stdout);
    #endif
    
    string s;
    cin >> s;
    cout << s << endl;

    sort(s.begin(), s.end());

    cout << "Sorted String : " << s << endl;
    reverse(s.begin(), s.end());
    cout << "Reversed String : " << s << endl;

    s.append("HAHAHA");
    cout << s << endl;

    cout << *max_element(s.begin(), s.end()) << endl;
    cout << *min_element(s.begin(), s.end()) << endl;

}
