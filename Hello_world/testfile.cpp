#include<bits/stdc++.h>
#define vi vector<int>
#define mi map<int,int>
#define pop pop_back

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,r,b,x,y;
        cin>>n>>r>>b;
        x = r/(b+1);
        y = r%(b+1);

        string str;
        for(int i = 0;i<(b+1-y);i++)
        {
            string str1(x,'R');
            str+=str1;
            str+='B';
        }
        for(int j = 0;j<y;j++)
        {
            string str2(x+1,'R');
            str+=str2;
            str+='B';
        }
        str.pop();
        cout<<str<<endl;



    }
}
