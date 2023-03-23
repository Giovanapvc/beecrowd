#include <iostream>
 
using namespace std;
 
int main() {
 
    int x;
    while(true){
        cin >> x;
        if(x == 0){
            break;
        } else {
            cout << "1";
            for(int i = 2; i <= x; i++){
                cout << " " << i;
            }
            cout << endl;
        }
    }
 
    return 0;
}