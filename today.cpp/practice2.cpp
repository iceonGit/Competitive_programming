#include<bits/stdc++.h>
#define ms map<char,int>
using namespace std;

int main()
{
    int n;
    cin>>n;
    ms m;
    for(int i = 0;i<n;i++)
    {
        char ch;
        cin>>ch;
        m.insert({ch,i+1});
    }

    for(auto &it:m)
    {
        cout<<it.first<<" "<<it.second<<endl;
    }


}
