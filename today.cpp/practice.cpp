#include <bits/stdc++.h>
#define pb push_back
#define ss set<string>
using namespace std;
///given N strings, print unique strings
///in lexicographical order
int main()
{
    ss s;
    int n;
    cin>>n;
    for(int i = 0;i<n;i++)
    {

        string str;
        cin>>str;
        s.insert(str);
    }

    for(auto value:s)
    {
        cout<<value<<endl;

    }
}
