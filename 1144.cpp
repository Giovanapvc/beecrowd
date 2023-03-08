//Write a program that reads an integer N. N * 2 lines must be printed by this program according to the example below. For numbers with more than 6 digits, all digits must be printed (no cientific notation allowed).

#include <iostream>

using namespace std;

int main() {

    int n;
    int i = 1;
    cin >> n;
    while(i <= n){
        cout << i << " " << i*i << " " << i*i*i << endl;
        cout << i << " " << (i*i) + 1 << " " << (i*i*i) + 1 << endl;
        i++;
    }

    return 0;
}