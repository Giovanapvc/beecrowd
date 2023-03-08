//The Federação Gaúcha de Futebol invited you to write a program to present a statistical result of several GRENAIS. Write a program that read the number of goals scored by Inter and the number of goals scored by Gremio in a GRENAL.
//Write the message "Novo grenal (1-sim 2-nao)" and request a response. If the answer is 1, two new numbers must be read (another input case) asking the number of goals scored by the teams in a new departure, otherwise the program must be finished, printing:
//- How many GRENAIS were part of the statistics.
//- The number of victories of Inter.
//- The number of victories of Gremio.
//- The number of Draws.
//- A message indicating the team that won the largest number of GRENAIS (or the message: "Não houve vencedor" if both team won the same quantity of GRENAIS).



#include <iostream>

using namespace std;
 
int main() {
 
 int n,p = 0, inter = 0, gremio = 0, vitoria = 0;
 int vi = 0, vg = 0, e = 0, c = 1;
 while(p == 0){
     cin >> inter >> gremio;
     if (inter > gremio){
         vi++;
     } else if(gremio > inter){
         vg++;
     } else if(inter == gremio){
         e++;
     }
     cout << "Novo grenal (1-sim 2-nao)" << endl;
     cin >> n;
     if(n == 1) {
         p = 0;
         c++;
     } else if (n == 2) {
         p = 1;
     }
 }
 
 cout << c << " grenais" << endl;
 cout << "Inter:"<< vi << endl;
 cout << "Gremio:"<<vg << endl;
 cout << "Empates:" << e << endl;
 if(vi > vg){
     cout << "Inter venceu mais" << endl;
 } else if(vg > vi){
     cout << "Gremio venceu mais" << endl;
 } else if(vg == vi) {
     cout << "Não houve vencedor" << endl;
 }
 
    return 0;
}