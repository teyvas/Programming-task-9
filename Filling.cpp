#include<iostream>
using namespace std;
int main(){
    int n,a[500][500],sum=0,count=1,ssum=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        if(i%2==0){
            for(int j=0; j<n;j++)
            {
                a[i][j]=count;
                count++;
            }
        }
        else 
        {
            for(int j=n-1; j>=0;j--)
            {
                a[i][j]=count;
                count++;
            }
        }
        
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0; j<n;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
//jkji
}