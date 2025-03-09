
#include <iostream>
using namespace std;
int main() {
    int n,a=0,b=0;
    cout << "Матрицаның өлшемін енгізіңіз (n x n): ";
    cin >> n;
    int matrix[n][n];
        cout << "Матрицаны енгізіңіз:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }
    cout << "Негізгі диагональ:\n";
    for (int i = 0; i < n; i++) {
        cout << matrix[i][i] << " ";
    }
      cout << endl;
      
   for (int i = 0; i < n; i++) {
       if(matrix[i][i]%2==0){
       a++;
   }
   else
   {
       b++;
   }
   }
   cout<<a<<" ";
   cout<<b<<" ";
    return 0;}

