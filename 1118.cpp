//Write an program to read two scores of a student. Calculate and print the semester average. The program must accept only valid scores (a score must fit in the range [0.10]). Each score must be validated separately.
//The program must print a message "novo calculo (1-sim 2-nao)" that means "new calculate (1-yes 2-no)". After, the input will be (1 or 2). 1 means a new calculation, 2 means that the execution must be finished.

#include <iostream>
#include <iomanip>
#include <cstdlib>
 
using namespace std;
 
int main() {
 
float n,media,p,k;
    media = p = k = 0;
    while(1)
    {
        cin >> n;
        if(n < 0.0 || n > 10.0)
            cout << "nota invalida" << endl;
        else
        {
            media += n;
            p++;
            if(p==2)
            {
                media/=2;
                cout << "media = " << fixed << setprecision(2) << media << endl;
                cout << "novo calculo (1-sim 2-nao)" << endl;
                while(1)
                {
                    cin >> n;
                    if((int)n==1)
                    {
                        media = p = 0;
                        k=1;
                        break;
                    }
                    else if((int)n==2)
                        exit(0);
                    else
                        cout << "novo calculo (1-sim 2-nao)" << endl;
                }
            }
        }
    }
 
    return 0;
}