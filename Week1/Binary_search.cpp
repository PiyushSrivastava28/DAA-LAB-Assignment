#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,key,start,end,mid,count;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector <int> vec(n);
        for(i=0;i<n;i++)
        {
            cin>>vec[i];
        }
        cin>>key;
        start = 0;
        end = n-1;
        count=0;
        bool check = false;
        while(start<=end)
        {
            mid = (start + end)/2;
            count++;
            if(key == vec[mid])
            {
                check = true;
                break;
            }
            else if(key < vec[mid])
            {
                end = mid-1;
            }
            else
                start =mid +1; 

        }
        if(check)
            cout<<"Element found "<<endl << count;
        else
            cout<<"Element not found "<<endl << count;
    }

    return 0;
}
