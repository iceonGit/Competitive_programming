///executing upper and lower bound without hassles
#include<iostream>
#define ll long long

using namespace std;
int main()
{
    int a[7];
    for(int i =0;i<7;i++)
    {
        cin>>a[i];
    }
    int item; ///whose lower bound we want to find
    cin>>item;
    int low =0, high = 7;
    int mid,ans=-1;
    while(low<high)
    {
        mid = low +(high-low)/2;
        if(a[mid]>=item)
        {
            ans = mid;
            high = mid;
        }

        else
            low = mid+1;
    }
    cout<<a[ans]<<endl;
}
