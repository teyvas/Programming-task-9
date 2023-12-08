#include<iostream>
using namespace std;
int main(){
    int n,a[100][100],sum=0,count=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0; j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0; j<n;j++)
        {   
            if(a[i][j]<0 and a[i][j]%2==0){
                sum+=a[i][j];
                count++;
            } 
            
        }
        
    }
    cout<<count<<" "<<sum;
}