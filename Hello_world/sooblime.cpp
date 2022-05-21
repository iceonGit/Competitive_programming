#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
using namespace std;
bool check(vi v, int x)
{
	int i = 0, j = v.size() - 1;

	while (i < j)
	{
		if (v[i] == x)
			i++;
		else if (v[j] == x)
			j--;
		else if (v[i] != v[j])
			return 0;
		else
			i++, j--;
	}

	return 1;
}
int main()
{
    int t;
    cin>>t;
        while(t--)
        {
                  int n;
                  cin >> n;
		            vi v(n);

	            for (int i = 0; i < n; ++i)
		        	cin >> v[i];

        		bool ct = 1;

        		for (int i = 0; i < n - 1 - i; ++i)
        			if (v[i] != v[n - 1 - i])
        			{
        			 ct = check(v, v[i]) or check(v, v[n - 1 - i]);
        				break;
        			}

        		if (ct)
        			cout << "YES\n";

        		else
        			cout << "NO\n";

        }
    return 0;
}
