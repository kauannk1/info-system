#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;




void catalogo(double caixa){
	cout << "CODIGO: \t|PRODUTO: \t                      	|PRECO:" << endl;
	cout << "--------------------------------------------------------------" << endl;
	cout << "1 \t        Enroladinho de Presunto e Queijo \tR$6,50" << endl;
	cout << "2 \t        Hamburguer de Cheddar \t\t\tR$6,50" << endl;
	cout << "3 \t        Hamburguer com Bacon \t\t\tR$6,50" << endl;
	cout << "4 \t        Pastel de Queijo \t\t\tR$7,00 \n" << endl;
	cout << "--------------------------------------------------------------" << endl;
	cout << "\t        Total a pagar: R$" << fixed << setprecision(2) << caixa << endl;
	cout << "\n\t      (Digite 0 para finalizar o pedido)" << endl;
	
	
	cout << "--------------------------------------------------------------" << endl;	
}

void pedido_fechado(int sal1, int sal2, int sal3, int sal4, double pSal1, double pSal2, double pSal3, double pSal4, double caixa) {
    cout << "UNIDADES: \t|PRODUTO: \t                      |PRECO:" << endl;
    cout << "--------------------------------------------------------------" << endl;
    cout << sal1 << " \t        Enroladinho de Presunto e Queijo \t" << fixed << setprecision(2) << pSal1 << endl;
    cout << sal2 << " \t        Hamburguer de Cheddar \t\t\t" << fixed << setprecision(2) << pSal2 << endl;
    cout << sal3 << " \t        Hamburguer com Bacon \t\t\t" << fixed << setprecision(2) << pSal3 << endl;
    cout << sal4 << " \t        Pastel de Queijo \t\t\t" << fixed << setprecision(2) << pSal4 << endl;
    cout << "--------------------------------------------------------------" << endl;
    cout << "Total a pagar: R$" << fixed << setprecision(2) << caixa << endl;
}

void promocao(double sal1, double sal2, double sal3, double caixa){
	double finalValue, desconto;
	desconto = caixa * 0.20;
	finalValue = caixa - desconto;
	cout << "Voce ganhou um desconto de 20% porque comprou mais de 3 salgados!" << endl;
	cout << "Seu desconto eh de R$" << desconto << endl;
	cout << endl;
	
	cout << "O valor final do pedido eh R$" << fixed << setprecision(2) << finalValue << endl;
	
		
}


int main(){
	double caixa = 0, pSal1 = 0, pSal2 = 0, pSal3 = 0, pSal4 = 0;
	int code, sal1 = 0, sal2 = 0, sal3 = 0, sal4 = 0; // pSal = preço salgado
	bool running = true; //sal = salgado
	char answer;
	  cout << "Voce gostaria de iniciar o programa? (S/N) " << endl;
	  cin >> answer;
	  
	  
	  if (answer == 'S' || answer == 's')
	  
	  {
	  	system("cls");
	  	
		
		
	  	while(running = true){
	  		
	  		//Chamando a função
	  		catalogo(caixa);
	  		
	  		cout << "Digite o codigo do produto: ";
	  		cin >> code;
	  		
	  		if (code == 0){
	  			running = false;
	  			system("cls");
	  			cout << "Seu pedido foi finalizado! " << endl;
	  			
	  			//pausando e limpando console
	  			system("pause");
	  			system("cls");
	  			
	  			//chamando função
	  			pedido_fechado(sal1, sal2, sal3, sal4, pSal1, pSal2, pSal3, pSal4, caixa);
	  			if ((sal1 + sal2 + sal3 + sal4) > 3 ){
	  				cout << "\n\n!!!! Voce ganhou uma promocao surpresa !!!!\n\n" << endl;
	  				system("pause");
	  				system("cls");
	  				promocao(pSal1, pSal2, pSal3, caixa);
				  }
	  			return 0;
			}
			
			
			switch (code){
				
				case 1: caixa = caixa + 6.50;
						sal1 = sal1 + 1;
						pSal1 = sal1 * 6.50;
						break;
				
				case 2: caixa = caixa + 6.50;
						sal2 = sal2 + 1;
						pSal2 = sal2 * 6.50;
						break;
						
				case 3: caixa = caixa + 6.50;
						sal3 = sal3 + 1;
						pSal3 = sal3 * 6.50;
						break;
						
				case 4: caixa = caixa + 7.00;
						sal4 = sal4 + 1;
						pSal4 = sal4 * 6.50;
						break;
						
				default:system("cls"); 
						cout << "Voce inseriu um codigo invalido." << endl;
						system("pause");
						break;
				
			}
			
			//Limpando console
	  		system("cls");
	  		
		  }
	  }
	  
	  else{
	  	cout << "Programa Encerrado." << endl;
	  	return 0;
	  }
	  
}
