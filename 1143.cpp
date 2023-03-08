//Write a program that reads an integer N (1 < N < 1000). This N is the number of output lines printed by this program.


#include <iostream>
 
using namespace std;
 
int main() {
 
    int n;
    cin >> n;
    int i = 1;
    while(i <= n){
        cout << i << " " << i*i << " " <<  i*i*i << endl;
        i++;
    }
 
    return 0;
}