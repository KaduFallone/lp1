#include<iostream>


int main(){
	using namespace std;
	setlocale(LC_ALL, "Portuguese");
	int num1;
	
	cout << "escolha um n�mero\n";
	cin >> num1;
	cout << endl;
	
	if (num1 % 3 == 0){
		cout <<"seu n�mero � divisivel por 3\n";
	}
	
	else {
		cout << "seu n�mero n�o � divisivel por 3";
	}
	
	return 0
}
