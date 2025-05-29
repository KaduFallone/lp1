#include<iostream>
using namespace std;

int main(){
    int tam = 20;
    string name[tam];
    int idade[tam];
    float notas[tam];
    float soma = 0;
    float media;
    int opcao;
    bool DadosLidos = false;
    do{
        cout << "====MENU====" << endl;
        cout << "1 - Ler notas, nomes e idades de "<< tam<< " candidatos\n";
        cout << "2 - Exibir media geral das notas\n";
        cout << "3 - Exibir lista com nome e nota de todos os candidatos\n";
        cout << "4 - Buscar candidato pelo nome e exibir nome e idade\n";
        cout << "0 - Sair\n";
        cout << "Escolha uma opcao: ";
        cin >> opcao;
        cin.ignore();   
        
        //1.Ler notas, nome e idade de 20 candidatos:
        if(opcao == 1){
            cout <<"Cadastre os "<<tam<<" candidatos" << endl;
            for(int i = 0; i < tam; i++ ){
                cout <<"Nome do candidato "<<tam<<" :" << endl;
                cin.ignore(); 
                getline(cin, name[i]);
                cout <<"Idade do candidato "<<tam<<" :" << endl;
                cin >> idade[i];
                cout << "Nota do candidato "<<tam<<" :" << endl;
                cin >> notas[i];
                soma +=notas[i];
            }
            DadosLidos = true;
            cout << endl <<"==Cadastro completo=="<< endl;
        }

        //2.Exibir media geral notas:
        else if(opcao == 2){
            if(!DadosLidos){
                cout << "VOCE PRECISA CADASTRAR OS CANDIDATOS" <<  endl;
            }
            else{
                media = soma/tam;
                cout << "A media geral dos candidatos eh: " << media << endl;
            }
        }

        //3.Exibir lista com nomes e notas de cada candidato:
        else if(opcao == 3){
            if(!DadosLidos){
                cout << "VOCE PRECISA CADASTRAR OS CANDIDATOS" <<  endl;
            }
            else{
                cout << "==Lista=="<< endl;
                cout << "Nome :\t"<<"||Notas:\t"<< endl;
                for(int i = 0; i < tam; i ++){
                    cout << name[i]<<"\t||"<<notas[i] << endl;
                }
            }
        }

        //4.Buscar candidato pelo nome e exibir nome e idade
        if(opcao == 4){
            if(!DadosLidos){
                cout << "VOCE PRECISA CADASTRAR OS CANDIDATOS" <<  endl;
            }
            else{
                string BuscarNome;
                cin.ignore();
                cout << "Candidato a ser buscado: " <<endl;
                getline(cin, BuscarNome);
                bool encontrado = false;

                for (int i = 0; i < tam; i++) {
                    if (name[i] == BuscarNome) {
                        cout << endl << "Candidato encontrado: " << name[i] << endl;
                        cout << " - Idade: " << idade[i] << endl;
                        encontrado = true;
                        break;
                    }
                }
                if (!encontrado) {
                    cout << "Candidato não encontrado" << endl;
                }
            }
        }

        else if (opcao == 5) {
            cout << "Encerrando o programa...\n";
        }

        else {
            cout << "Opção inválida. Tente novamente.\n";
        }

    }while(opcao != 5);

    return 0;

    
}








