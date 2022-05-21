#include <iostream>
#define vi vector<int>

using namespace std;

void reverseArray(int arr[],int start,int end)
{
    while(start<end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }

}

void leftRotate (int arr[],int d , int n)
{
    if(d==0)
        return;
    d=d%n;
    reverseArray(arr,0,d-1);
    reverseArray(arr,d,n-1);
    reverseArray(arr,0,n-1);
}
int main()
{
    int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
    int n = *(&arr+1)-arr;
    int d = 2;

    leftRotate(arr, d, n);
    for(int i =0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }


}
