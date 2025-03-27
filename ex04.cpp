#include <iostream>
using namespace std;
int main()
{
     
    int x,y;
    cin>>x>>y;
    int arr[y];
    for(int i=0;i<y;i++){
        cin>>arr[i];
    }
    for(int i=0;i<y;i++){
        for(int j=0;j<x;j++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
