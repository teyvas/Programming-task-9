#include<iostream>
using namespace std;
int main(){
      int mas[100][100], n, rev = 0, x, y, i, j; 
      cin>>n;
      mas[0][0] = 1; 
      mas[1][0] = 2; 
      x = 1; y = 0; 
      for (i = 3; i <= n * n; i++) { 
            if (rev % 2 == 0) { 
            if (x != 0 && y != n - 1) { 
                  x--; y++; 
                  } 
            else if (x == 0 && y == n - 1) {
                  x++; rev++; 
            } 
            else if (x == 0) {
                  y++; rev++; 
            } 
            else if (y == n - 1) { 
                  x++; rev++; 
            }
            } 
                                                
            else { 
                        
                  if (x != n - 1 && y != 0) { 
                        x++; y--; 
                  } 
                  else if (x == n - 1 && y == 0) { 
                        y++; rev++;
                  } 
                  else if (x == n - 1) { 
                        y++; rev++; 
                  } 
                  else if (y == 0) { 
                        x++; rev++; 
                  }
            } 
            mas[x][y] = i; 
      } 
      
      for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++){
                  cout<<mas[i][j]<<" ";
            } 
                  
            cout<<"\n"; 
            } 
}

