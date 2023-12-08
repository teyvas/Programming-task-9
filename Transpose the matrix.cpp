#include<iostream>
using namespace std;
int main(){
    int a[1000][1000],b[1000][1000],count=1,n,m;
    cin>>n>>m;
    for(int i=n-1;i>=0;i--){
        for(int j=0;j<m;j++){
            a[i][j]=count;
            count++;
        }
    }
    count=1;
    for(int j=0;j<m;j++){
    
        for(int i=n-1;i>=0;i--){
            b[i][j]=count;
            count++;
        }
    }
    count=0;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j]==b[i][j]) count++;
            
        }
    }
    cout<<count;

}