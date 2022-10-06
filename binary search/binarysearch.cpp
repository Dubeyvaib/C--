#include<bits/stdc++.h>
using namespace std;


int binary_search(int arr[],int target,int n)
{
    int low=0,high=n-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(target==arr[mid])
        {
            return mid;
        }
        else if(target<arr[mid])
        {
            high = mid-1;
        }
        else
        {
            low=mid+1;
        }
    }
    return -1;

}

int main()
{
   int g[] ={2,4,5,6,7,9};
   int res = binary_search(g,7,6);
   cout<<res<<endl;
    return 0;

}