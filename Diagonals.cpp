#include<iostream>
using namespace std;
int main(){
    int n,a[500][500],sum=0,count=0,ssum=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0; j<n;j++)
        {
            cin>>a[i][j];
            if(i==j){
                sum+=a[i][j];
                
            } 
            if(i+j==n-1){
                ssum+=a[i][j];
            }
        }
    }
    cout<<sum<<" "<<ssum;
}