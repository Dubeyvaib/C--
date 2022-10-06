#include<bits/stdc++.h>
using namespace std;
int Trapping(vector<int>vec)
{
    int n = vec.size();
    int left=0,right=n-1,maxleft=0,maxright=0,res=0;
    while(left<right)
    {
        if(vec[left]<=vec[right])
        {
            if(maxleft<vec[left])
            {
                maxleft=vec[left];
            }
            else{
                res+=maxleft-vec[left];
                
            }
            left++;
        }
        else
        {
            if(maxright<=vec[right])
            {
                maxright=vec[right];
            }
            else{
                res+=maxright-vec[right];
                
            }
            right--;
        }
    }
    return res;
}

int main()
{
    vector<int>a={6,9,9};
    cout<<Trapping(a)<<endl;
}