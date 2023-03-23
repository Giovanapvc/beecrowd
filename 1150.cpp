#include <iostream>
 
using namespace std;
 
int main() {
 
    int x, z;
    int cont = 0;
    int soma = 1;
    cin >> x >> z;
    while(z <= x){
        cin >> z;
    }
    
    for (int i = x;i < z; i++){
        cont += i;
        if(cont > z){
            break;
        }
        soma++;
    }
    
    cout << soma << endl;
    

 
    return 0;
}