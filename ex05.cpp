#include <iostream>
using namespace std;
int main()
{
     
    int m=5,n=6,c=0;
    
    int a[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
           i=(i+1)*10;
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
          cout<<a[i][j];
        }
        cout<<endl;
    }
    
    return 0;
}
