#include <iostream>
using namespace std;


int main() {
    int a[6] = {45, 12, 23, 19, 37, 6};
    
    for (int c = 0; c < 6; c++) {
        for (int d = 0; d < 6; d++) {
            if (a[d] > a[d+1]) {
                int e = a[d];
                a[d] = a[d+1];
                a[d+1] = e;
            }
        }
    }
