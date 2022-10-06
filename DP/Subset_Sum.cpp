// Check if a subset exists such that sum of all its elements equals the target.

#include<bits/stdc++.h>
using namespace std;

bool solve(vector<int> vec,int sum)
{
    int n = vec.size() + 1;
    int m = sum+1;
    bool dp[n][m];
    for(int i =0;i<n;i++)
    for(int j =0;j<m;j++)
    {
        dp[0][j]=false;
        dp[i][0]=true;
    }

    for(int i =1;i<n;i++){
    for(int j =1;j<m;j++){
    if(vec[i]<=j) 
    {
        dp[i][j] = dp[i-1][j] || dp[i][j-vec[i]];
    }
    else dp[i][j]=dp[i-1][j];
    }
    }

    return dp[n][m];


}

int main()
{
   
    vector<int> vec ={2,3,7,8,10};
    int sum = 168;
    if(solve(vec,sum)) cout<<"Yes!"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}