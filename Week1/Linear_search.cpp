#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test,size,no,cmp,i;
    bool check;
    cin>>test;
    while(test--)
    {
        cmp = 0;
        check = false;
        cout<<"Enter the size of array"<<endl;
        cin>>size;
        int arr[size];

        for(i=0;i<size;i++)
        {
            cin>>arr[i];
        }
        cout<<"Enter the key "<<endl;
        cin>>no;

        for(i=0;i<size;i++)
        {
            if(no == arr[i])
            {
                check = true;
                break;
            }
        }
        if(check)
        {
            cout<<"Key is Found"<<endl;
            cout<<"No of Comparisons: "<<(i+1)<<endl; 
        }
        else
        {
            cout<<"Not found"<<endl;
        }
    }
    
    return 0;
}



   



    


   

    

    


    
    
    

    

    
