//Write a program that reads two scores of a student. Calculate and print the average of these scores. Your program must accept just valid scores [0..10]. 
//Each score must be validated separately.


#include <iostream>
#include <iomanip>

 
using namespace std;
 
int main() {
 double x, y = 0.0, n = 0.0;
 double media = 0.0;
 while(true){
     cin >> x;
     if(x > 10.0 || x < 0.0){
         cout << "nota invalida" << endl;
     } else if(n == 0.0){
         y = x;  //o valor colocado em x passa a ser de y, o loop volta e um novo valor de x é inserido
         n = 0.1;
     }
     else {
         media = (x + y)/2;
         cout << "media = " << fixed << setprecision(2) << media << endl;
         break;
     }
 }
    
    return 0;
}