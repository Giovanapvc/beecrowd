//Write a program that reads an integer N. This N is the number of output lines printed by this program.

#include <iostream>
 
using namespace std;
 
int main() {
 
    int n;
    cin >> n;
    int m = 4*n;
    int i = 0;
    while(i < m){
        cout << (i+1) << " " << (i+2) << " " << (i+3) << " PUM" << endl;
            i+=4;
    }
 
    return 0;
}