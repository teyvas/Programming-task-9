#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
double a[100][100];
int main(){
      for(int i=0; i<2; i++){
            for (int  j = 0; j <3; j++)
            {
                  cin>>a[i][j];
            }
            
      }
      double cooficient, xcoof,ycoof;
      cooficient= a[0][0]*a[1][1]-a[0][1]*a[1][0];
      xcoof=a[0][2]*a[1][1]-a[1][2]*a[0][1];
      ycoof=a[0][0]*a[1][2]-a[1][0]*a[0][2];
      cout<<fixed<<setprecision(3)<<xcoof/cooficient<<" "<<ycoof/cooficient;

}