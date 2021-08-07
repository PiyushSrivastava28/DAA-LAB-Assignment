#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,j,k;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<int> vec(n);
        for(i=0;i<n;i++)
            cin>>vec[i];
        bool check=false;
        for(i=0;i<n-2;i++)
        {
            for(j=i+1;j<n-1;j++)
            {
                for(k=j+1;k<n;k++)
                {
                    if(vec[i]+vec[j]==vec[k])
                    {
                        check=true;
                        break;
                    }
                }
                if(check)
                    break;
            }
            if(check)
                break;
        }
        if(check)
            cout<<i+1<<", "<<j+1<<", "<<k+1<<endl;
        else
            cout<<"No sequence found"<<endl;
        
    }

    return 0;
}