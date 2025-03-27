#include <iostream>
using namespace std;
int main()
{
     
    int x,y;
    cin>>x>>y;
    int arr[x];
    for(int i=0;i<x;i++){
        cin>>arr[i];
    }
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
