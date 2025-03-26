#include <iostream>
using namespace std;
int main() {
    int n,m,s=1;
    cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
   for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if((i%2==0&&j%2!=0)||(i%2!=0&&j%2==0)){
                cout << "0 ";
            } else {
               cout<< s << " ";
                s++;
            }
        }
        cout << endl;
    }

    return 0;
}
