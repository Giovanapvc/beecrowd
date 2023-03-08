//Write a program that reads two integer numbers X and Y and calculate the sum of all number not divisible by 13 between them, including both.



#include <iostream>
 
using namespace std;
 
int main() {
 
    int x, y;
    int min = 0, max = 0, soma = 0;
    cin >> x >> y;
    if(x > y) {
        min = y;
        max = x;
    } else if(x < y){
        min = x;
        max = y;
    }
    
    for(int i = min; i <= max; i++){
        if(i%13 != 0){
            soma += i;
        }
    }
    
    cout << soma << endl;

 
    return 0;
}