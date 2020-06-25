#include <ctime>    // For time()
#include <cstdlib>  // For srand() and rand()
#include <iostream>
#include <string>

using namespace std;

int main(){
	
	int i, stop, op, size=27;
	string escolha;
	
	// Initialize String Array 
	string estados[27] = {"Acre", "Alagoas", "Amapa", "Amazonas", "Bahia", "Ceara", "Distrito Federal", "Espirito Santo", "Goias", "Maranhao", "Mato Grosso", "Mato Grosso do Sul", "Minas Gerais", "Para", "Paraiba",
						   "Parana", "Pernanbuco", "Piaui", "Rio de Janeiro", "Rio Grande do Norte", "Rio Grande do Sul", "Rondonia", "Roraima", "Santa Catarina", "Sao Paulo", "Sergipe", "Tocantins"};
						   
	string capitais[27] = {"Rio Branco", "Maceio", "Macapa", "Manaus", "Salvador", "Fortaleza", "Brasilia","Vitoria", "Goiania", "Sao Luis", "Cuiaba", "Campo Grande", "Belo Horizonte", 
							"Belem", "Joao Pessoa", "Curitiba", "Recife", "Teresina", "Rio de Janeiro", "Natal", "Porto Alegre", "Porto Velho", "Boa Vista", "Florianopolis", "Sao Paulo", "Aracaju", "Palmas"};
	
	cout << "|-------------------------------------|" << endl;
	cout << "|JOGO DE GEOGRAFIA, ESTADOS E CAPITAIS|" << endl;
	cout << endl << "Precione 1 para Estados e 2 Capitais: ";
	cin >> op;
	
	do{
		srand((unsigned)time(0)); 
		i = (rand()%size)+1; 
		
		if(op==1){
			cout << "A capital do Estado " << estados[i] << " e?\n R: ";
			cin >> escolha;
			if(escolha==capitais[i]){
				cout << "\nParabens, voce acertou!";
			}else{
				cout << "\nResposta errada!";
				cout << "\nA resposta correta e: " << capitais[i];
			}
			
 		}else{
 	
			cout << "O Estado da Capital " << capitais[i] << " e?\n R: ";
			cin >> escolha;
			if(escolha==estados[i]){
				cout << "\nParabens, voce acertou!";
			}else{
				cout << "\nResposta errada!";
			}
 		
		 }
			
		cout << "\nPrecione 0 se deseja parar ou 1 para continuar: ";
		cin >> stop;
		
	}while(stop != 0);
		
	return 0;
}
