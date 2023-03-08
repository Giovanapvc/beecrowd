//A gas station wants to determine which of their products is the preference of their customers. Write a program to read the type of fuel supplied (coded as follows: 1. Alcohol 2. Gasoline 3. Diesel 4. End). If you enter an invalid code (outside the range of 1 to 4) a new code must be requested. The program will end when the inserted code is the number 4.

#include <iostream>
 
using namespace std;
 
int main() {
 
    int a = 0, g = 0, d = 0, num, i = 0;
    while(true){
        cin >> num;
        if(num == 4){
            break;
        } else if(num == 1){
            a++;
        } else if(num == 2){
            g++;
        } else if(num == 3){
            d++;
        }
    }
    
    cout << "MUITO OBRIGADO" << endl;
    cout << "Alcool: " << a << endl;
    cout << "Gasolina: " << g << endl;
    cout << "Diesel: " << d << endl;
 
    return 0;
}