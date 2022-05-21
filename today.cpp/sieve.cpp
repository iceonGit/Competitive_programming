#include<bits/stdc++.h>
#define vi vector<int>
#define pb push_back
#define usi unordered_map<string,int>
#define mi map<int,int>

using namespace std;



int main()
{
  int n;
  cin>>n;

  string str;
  cin>>str;

  mi m;

  int ct = 0;
  for (int i = 1; i<2*(n-1); i += 2)
  {
    m[str[i-1] - 'a']++;
    if (m[str[i] - 'A'] == 0)
    {
      ct++;
    }
    else
    {
      m[str[i] - 'A']--;
    }
  }

  cout<<ct;
}
