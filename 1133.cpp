//Write a program that reads two integer numbers X and Y. Print all numbers between X and Y which dividing it by 5 the rest is equal to 2 or equal to 3.

#include <iostream>
 
using namespace std;
 
int main() {
 
    int x, y, min = 0, max =0;
    cin >> x >> y;
    if(x < y){
        min = x;
        max = y;
    } else if (x > y){
        min = y;
        max = x;
    } 
    
    for(int i = min+1; i < max; i++){
        if(i%5 == 2 || i%5 == 3){
            cout << i << endl;
        }
    }
 
    return 0;
}