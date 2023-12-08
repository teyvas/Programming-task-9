#include<iostream>
using namespace std;
int main(){
    int n,a[500][500],sum=0,count=1,ssum=0,b[500][500], m;
    cin>>n>>m;;
    for(int i=0;i<n;i++)
    {
        for(int j=0; j<m;j++)
        {
            cin>>a[i][j];
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0; j<m;j++)
        {
            cin>>b[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0; j<m;j++)
        {
            if(b[i][j]==1){
                sum+=a[i][j];
            }
        }
    }
    cout<<sum;

}