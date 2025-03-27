#include <iostream>
using namespace std;


int main() {
    int a[6] = {22, 16, 9, 4, 11, 3};
    
    for (int c = 0; c < 6; c++) {
        for (int d = 0; d < 6; d++) {
            if (a[d] < a[d+1]) {
                int e = a[d];
                a[d] = a[d+1];
                a[d+1] = e;
            }
        }
    }
    
    for (int b = 0; b < 6; b++) {
        cout << a[b] << " ";
    }
    
    return 0;
}
