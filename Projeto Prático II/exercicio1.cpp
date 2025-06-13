#include <iostream>
using namespace std;

int tam = 20;

int main(){
    
    int L = tam;
    int C = tam;
    char campoMinado[L][C];
    int resulCamppMinado[L][C];

    cout <<"De o campo minado:"<< endl;
    for(int i = 0; i < tam; i++){
        for(int j = 0; j < tam; j++){
            cin >> campoMinado[i][j];
            cout << " ";
        }
        cout << endl;
    }

    for(int i = 0; i < tam; i++){
        for(int j = 0; j < tam; j++){
            cout << campoMinado[i][j];
            cout << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < tam; i++) {
        for (int j = 0; j < tam; j++) {
            resulCamppMinado[i][j] = 0;
        }
    }

    for(int i = 0; i < tam; i++){
        for(int j = 0; j < tam; j++){
            if(campoMinado[i][j]=='*'){

                for(int Vx = i -1; Vx < i + 1; Vx++){
                    for(int Vy = j -1; Vy < j + 1; Vy++){
                        if (Vx >= 0 && Vx < tam && Vy >= 0 && Vy < tam) {
                            if (!(Vx == i && Vy == j)) { 
                                resulCamppMinado[Vx][Vy]++;
                            }
                        }    
                    }
                }
            }
            
        }
        
    }
    

    cout << endl << "Resultado final do campo minado:" << endl;
    for(int i = 0; i < tam; i++){
        for(int j = 0; j < tam; j++){
            if(campoMinado[i][j] =='*'){
                cout << "* ";
            }
            else{
                cout << resulCamppMinado[i][j] << " ";
            }
        }
        cout << endl;
    }

    return 0;


}

