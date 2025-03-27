#include <iostream>
using namespace std;


int main() {
    int a[6] = {22, 16, 9, 4, 11, 3};
    
    int e[3], c[3];
    
    for (int d = 0; d < 3; d++) {
        e[d] = a[d];
    }
    
    for (int f = 3; f < 6; f++) {
        c[f-3] = a[f];
    }
    
    for (int b = 0; b < 3; b++) {
        cout << e[b] << " ";
    }
    
    cout << endl;
    
    for (int g = 0; g < 3; g++) {
        cout << c[g] << " ";
    }
    
    return 0;
}
