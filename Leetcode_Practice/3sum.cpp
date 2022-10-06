#include <bits/stdc++.h>
using namespace std;

int main()
{
    int dt,final=0;
    cin>>dt;
    string m,haha;
    cin>>m;
    vector<pair<string,int>> res={{"January",1},{"February",-1},{"March",1},{"April",0},{"May",1},
    {"June",0},{"July",1},{"August",1},{"September",0},{"October",1},{"November",0},{"December",1}};

    for(int i=0;i<12;i++)
    {
        if(m==res[i].first)
        {
            haha=res[(i+6)%12].first;
            for(int j=i;j<(i+6)%12;j++)
            {
                final+=res[j].second; 
            }
            dt=dt-final+3; 
            if(dt>30+res[(i+6)%12].second)
            {
                dt-=30+res[(i+6)%12].second;
                haha=res[(i+7)%12].first;
            }
            cout<<dt<<" "<<haha<<endl;
            break;
        }
    }
    
    return 0;
}