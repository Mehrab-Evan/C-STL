#include<iostream>
#include<utility>
#include<algorithm>
#include<set>
using namespace std;


int main()
{
    #ifndef ONLINE_JUDGE
    freopen("hackin.txt", "r", stdin);
    freopen("hackout.txt", "w", stdout);
    #endif
    
    set <int> s;
    set <int> :: iterator it;

    for(int i=0; i<5; i++) {
        int x;
        cin >> x;
        s.insert(x);
    } 

    //iterator is a pointer
    //setting the iterator as the first element of set
    //iterate the set till the end
    //for printing the pointer value we use * sign
    //set doesn't take duplicate value
    //set sort automatically
    for(it = s.begin(); it != s.end(); it++) {
        cout << *it << endl;
    }
    

}
