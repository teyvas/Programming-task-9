#include <iostream>
using namespace std;
int main()
{
      int a[100][100], b[100][100];
      int n,m,q,w;
      cin>>n>>m;
   
      for(int i=0;i<n; i++){
            for(int j=0; j<m;j++){
                  cin>>a[i][j];
            }
      }
      cin>>q>>w;
      for(int i=0;i<q; i++){
            for(int j=0; j<w;j++){
                  cin>>b[i][j];
            }
      }

 
      int rslt[n][w];
      if(m!=q){
            cout<<-1;
      }
      else{
           cout <<n<<" "<<w<<endl;

	      for (int i =0; i<n; i++){
		      for (int j =0; j<w; j++){
			      rslt[i][j] = 0;

			      for (int k = 0; k < q; k++) {
				      rslt[i][j] += a[i][k] * b[k][j];
			      }

			      cout << rslt[i][j]<<" ";
		      }
		      cout << endl;
	      } 
      }
	

}