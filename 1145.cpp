#include <iostream>
 
using namespace std;
 
int main() {
 
    int x, y;
    cin >> x;
    cin >> y;
    int c = x;
    
    for (int i = 1; i <= y; i++){
        if(c == 1){
            cout << i <<  endl;
            c = x;
        }
        else {
            cout << i << " ";
            c--;
        }
}
 
    return 0;
}