#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int t;
	cin>>t;
    while(t--)
    {
        int n,k,m;
        cin>>n>>k>>m;
        vector<int> arr(n);
        for(int i =0;i<n;i++)
        {
            cin>>arr[i];
        }
        if(n==1)
	    {
	        cout<<arr[0];
	    }
        else
        {
            vector<int> temp(n);
            temp[0]=arr[0];
            for(int i =1;i<n;i++)
            {
                temp[i]=temp[i-1]+arr[i];
            }
            vector<int> tem(n);
            tem[0]=temp[k-1];
            for(int i =1;i<=n-k;i++)
            {
                tem[i]=temp[i+k-1]-temp[i-1];
            }
            sort(tem.begin(),tem.end(),greater<int>());
            for(int i =0;i<m;i++)
            {
                cout<<tem[i]<<" ";
            }
            cout<<endl;
        }
    }
	return 0;
}