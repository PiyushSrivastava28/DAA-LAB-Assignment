#include<bits/stdc++.h>
using namespace std;

int binary_s(vector<int> vec, int n, int key)
{
        int mid;
        int start = 0;
        int end = n-1;
        while(start<=end)
        {
            mid = (start + end)/2;
            
            if(key == vec[mid])
            {
                return mid;
            }
            else if(key < vec[mid])
            {
                end = mid-1;
            }
            else
                start = mid +1; 

        }
        cout<<"Key not present "<<endl;
        return -1;
    
}
int main()
{
    int t,n,i,key,count;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<int> vec(n);
        for(i=0;i<n;i++)
            cin>>vec[i];
        cin>>key;
        count=1;
        int pos = binary_s(vec,n,key);
        if(pos!=-1)
        {
            for(i=pos-1;i>=0;i--)
            {
                if(vec[i]==key)
                    count++;
                else
                    break;
            }
            
            for(i=pos+1;i<n;i++)
            {
                if(vec[i]==key)
                    count++;
                else
                    break;
            }
            cout<<key<<" - "<<count<<endl;
        }
    }
    return 0;
}