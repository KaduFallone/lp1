#include<iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
     srand(time(0)); 
     int num;
     int escolha;
     int tentativa = 0;
     
     do{
        int aleatorio = rand() % 100 + 1;
    
        cout << "Escolhi um numero aleatorio entr 1 e 100, tente adivinhar qual eh: "<< endl;
        do{
            cin >> num;
            if (num > aleatorio){
                cout << "O numero aleatorio eh menor que o numero escolhido por voce" << endl;
            }
            else if (num < aleatorio){
                cout << "O numero aleatorio eh maior que o numero escolhido por voce" << endl;
            }
            tentativa++;
        }while(num != aleatorio);

        cout << "Parabens voce acertou o numero em "<<tentativa<<" tentativas!!!"<< endl;
        
        cout << "Deseja brincar novamente??(SIM=0 / NAO=1)" << endl;
        cin >> escolha;
        if(escolha == 1){
            cout << "Okay, brincamos outra hora"<< endl;
        }
        else if(escolha == 0) cout << "Okay, vamos para a proxima rodada!!" << endl;
         else{
            cout << "Numero invalido" << endl;
            break;
         } 

    }while( escolha == 0);

    return 0;


    
}