#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,key,j;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<int> vec(n);
        for(i=0;i<n;i++)
            cin>>vec[i];
        cin>>key;
        int count=0;
        for(i=0;i<n-1;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(abs(vec[i]-vec[j]) == key)
                    count++;
            }
        }
        cout<<count<<endl;
    }

    return 0;
}