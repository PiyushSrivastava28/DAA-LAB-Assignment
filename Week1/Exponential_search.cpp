#include<bits/stdc++.h>
using namespace std;

int linear_search(vector <int> vec,int j,int n,int key)
{
    int i,count;
    count=0;
    bool check=false;
    for(i=j;i<n;i++)
        {
            count++;
            if(key == vec[i])
            {
                check = true;
                break;
            }
        }
        if(check)
        {
            cout<<"Present ";
        }
        else
        {
            cout<<"Not present ";
        }
        return count;
}

int main()
{
    int t,i,key,n,count;
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
        bool check = false;
        count=0;

        if(vec[0] == key)
        {
            count++;
            cout<<"Present "<<count;
            return 0;
        }
        i=1;
        while(i<n && key>=vec[i])
        {   
            i=i*2;
            count++;
        }
        
        int c = linear_search(vec,i/2,n,key);
        count = count+c+1;
        cout<<count<<endl;
    }

    return 0;
}
