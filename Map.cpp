#include<iostream>
#include<utility>
#include<algorithm>
#include<map>
using namespace std;


int main()
{
    #ifndef ONLINE_JUDGE
    freopen("hackin.txt", "r", stdin);
    freopen("hackout.txt", "w", stdout);
    #endif
    
    map <char, int> mp;
    map <char, int> :: iterator it;

    string s;
    cin >> s;

    for(int i=0; i<s.size(); i++) {
        mp[s[i]] ++;
    }
    
    for(it = mp.begin(); it != mp.end(); it++) {
        cout << it->first << " Appears : " << it->second << " Times" << endl;
        //cout << s[i] << "Appears : " << mp[s[i]] << " Times" << endl;
    }
    cout << endl;
    

}
//this program will count characters in a word
