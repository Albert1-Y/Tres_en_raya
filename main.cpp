// NOMBRES

#include <iostream>

int main(){
	std::cout << "\n\n*************************************************************\n********************TRES EN RAYA*****************************\n*************************************************************\n\n\n";

	char blok_1 = ' ', blok_2 = ' ', blok_3 = ' ', blok_4 = ' ', blok_5 = ' ', blok_6 = ' ', blok_7 = ' ', blok_8 = ' ', blok_9 = ' '; // declaracion de las diferentes celdas del cuadro
	char blok_1_2 = '1',blok_2_2 = '2',blok_3_2 = '3',blok_4_2 = '4',blok_5_2 = '5',blok_6_2 = '6',blok_7_2 = '7',blok_8_2 = '8',blok_9_2 = '9';

	// primer cuadro 

	std::cout <<"---+---+---"<<std::endl;
	std::cout <<" "<<'1'<<" "<<"|"<<" "<<'2'<<" "<<"|"<<" "<<'3'<<" "<<std::endl;
	std::cout <<"---+---+---"<<std::endl;
	std::cout <<" "<<'4'<<" "<<"|"<<" "<<'5'<<" "<<"|"<<" "<<'6'<<" "<<std::endl;
	std::cout <<"---+---+---"<<std::endl;
	std::cout <<" "<<'7'<<" "<<"|"<<" "<<'8'<<" "<<"|"<<" "<<'9'<<" "<<std::endl;
	std::cout <<"---+---+---"<<std::endl;

	std::cout << "\nIgrese el simbolo que usara el jugador 1: ";
	char simbolo_player_1;
	std::cin >> simbolo_player_1;

	
	// 

	char simbolo_player_2;

	std::cout << "\nIgrese el simbolo que usara el jugador 2: ";
	std::cin >> simbolo_player_2;

	while(true){
		
		if (simbolo_player_1 == simbolo_player_2){
			std::cout << "\nALERTA ... Los simbolos no pueden ser iguales";
			std::cout << "\nIgrese el simbolo que usara el jugador 2: ";
			std::cin >> simbolo_player_2;
		} else if (simbolo_player_1 != simbolo_player_2){
			break;
		}
	}

	std::cout << "\n\n**************************************************************\n************************BUENO EMPEZEMO************************\n**************************************************************\n\n\n";

	std::cout << "Juegador 1:\t" << simbolo_player_1 << std::endl;
	std::cout << "Juegador 2:\t" << simbolo_player_2 << std::endl << std::endl;;


	int n=0; //virable de control
	int contador = 0;

	char variable_de_pr, variable_de_pr_2;

	while (true){

		std::cout << "\n==============================================================\n\n";

		std::cout <<"---+---+---"<<std::endl;
		std::cout <<" "<<blok_1<<" "<<"|"<<" "<<blok_2<<" "<<"|"<<" "<<blok_3<<" "<<std::endl;
		std::cout <<"---+---+---"<<std::endl;
		std::cout <<" "<<blok_4<<" "<<"|"<<" "<<blok_5<<" "<<"|"<<" "<<blok_6<<" "<<std::endl;
		std::cout <<"---+---+---"<<std::endl;
		std::cout <<" "<<blok_7<<" "<<"|"<<" "<<blok_8<<" "<<"|"<<" "<<blok_9<<" "<<std::endl;
		std::cout <<"---+---+---"<<std::endl<<std::endl;

		if ((blok_1 == simbolo_player_1 && blok_2 == simbolo_player_1 && blok_3 == simbolo_player_1)||(blok_4 == simbolo_player_1 && blok_5== simbolo_player_1 && blok_6== simbolo_player_1)||(blok_7== simbolo_player_1 && blok_8== simbolo_player_1 && blok_9== simbolo_player_1)||(blok_1== simbolo_player_1 && blok_5== simbolo_player_1 && blok_9== simbolo_player_1)||(blok_3== simbolo_player_1 && blok_5== simbolo_player_1 && blok_7== simbolo_player_1)||(blok_1== simbolo_player_1 && blok_4== simbolo_player_1 && blok_7== simbolo_player_1)||(blok_2==simbolo_player_1 && blok_5== simbolo_player_1 && blok_8== simbolo_player_1)||(blok_3== simbolo_player_1 && blok_6== simbolo_player_1 && blok_9== simbolo_player_1)){
			std::cout<<"gano el de "<<simbolo_player_1;
			break;
		}
		else if ((blok_1== simbolo_player_2 && blok_2== simbolo_player_2 && blok_3== simbolo_player_2)||(blok_4== simbolo_player_2 && blok_5== simbolo_player_2 && blok_6== simbolo_player_2)||(blok_7== simbolo_player_2 && blok_8== simbolo_player_2 && blok_9== simbolo_player_2)||(blok_1== simbolo_player_2 && blok_5== simbolo_player_2 && blok_9== simbolo_player_2)||(blok_3== simbolo_player_2 && blok_5== simbolo_player_2 && blok_7== simbolo_player_2)||(blok_1== simbolo_player_2 && blok_4== simbolo_player_2 && blok_7== simbolo_player_2)||(blok_2== simbolo_player_2 && blok_5== simbolo_player_2 && blok_8== simbolo_player_2)||(blok_3== simbolo_player_2 && blok_6== simbolo_player_2 && blok_9== simbolo_player_2)){
			std::cout<<"gano el de "<<simbolo_player_2;
			break;
		} else if(contador == 9){
			std::cout<<"EMPATE";
			break;
		}
		contador = contador + 1;
		
		while(true){
			
			if (n==0){
				std::cout << "Ingrese el numero de la posicion que desea  (Juagador N1): ";
				std::cin >> variable_de_pr;

				if (variable_de_pr == '1' && variable_de_pr == blok_1_2){
					blok_1 = simbolo_player_1;
					blok_1_2 = simbolo_player_1;
					n = 1;
					break;
				} else if(variable_de_pr == '2' && variable_de_pr == blok_2_2){
					blok_2 = simbolo_player_1;
					blok_2_2 = simbolo_player_1;
					n = 1;
					break;
				} else if(variable_de_pr == '3' && variable_de_pr == blok_3_2){
					blok_3 = simbolo_player_1;
					blok_3_2 = simbolo_player_1;
					n = 1;
					break;
				} else if(variable_de_pr == '4' && variable_de_pr == blok_4_2){
					blok_4 = simbolo_player_1;
					blok_4_2 = simbolo_player_1;
					n = 1;
					break;
				} else if(variable_de_pr == '5' && variable_de_pr == blok_5_2){
					blok_5 = simbolo_player_1;
					blok_5_2 = simbolo_player_1;
					n = 1;
					break;
				} else if(variable_de_pr == '6' && variable_de_pr == blok_6_2){
					blok_6 = simbolo_player_1;
					blok_6_2 = simbolo_player_1;
					n = 1;
					break;
				} else if(variable_de_pr == '7' && variable_de_pr == blok_7_2){
					blok_7 = simbolo_player_1;
					blok_7_2 = simbolo_player_1;
					n = 1;
					break;
				} else if(variable_de_pr == '8' && variable_de_pr == blok_8_2){
					blok_8 = simbolo_player_1;
					blok_8_2 = simbolo_player_1;
					n = 1;
					break;
				} else if(variable_de_pr == '9' && variable_de_pr == blok_9_2){
					blok_9 = simbolo_player_1;
					blok_9_2 = simbolo_player_1;
					n = 1;
					break;
				} else {
					std::cout << "ERROR ... Deberia ser un numero del 1 al 9 y no estar ocupada por otro\n";
				}
			}else if(n==1){
				std::cout << "Ingrese el numero de la posicion que desea  (Juagador N2): ";
				std::cin >> variable_de_pr_2;

				if (variable_de_pr_2 == '1' && variable_de_pr_2 == blok_1_2){		
					blok_1 = simbolo_player_2;
					blok_1_2 = simbolo_player_2;
					n = 0;
					break;
				} else if(variable_de_pr_2 == '2' && variable_de_pr_2 == blok_2_2){
					blok_2 = simbolo_player_2;
					blok_2_2 = simbolo_player_2;
					n = 0;
					break;
				} else if(variable_de_pr_2 == '3' && variable_de_pr_2 == blok_3_2){
					blok_3 = simbolo_player_2;
					blok_3_2 = simbolo_player_2;
					n = 0;
					break;
				} else if(variable_de_pr_2 == '4' && variable_de_pr_2 == blok_4_2){
					blok_4 = simbolo_player_2;
					blok_4_2 = simbolo_player_2;
					n = 0;
					break;
				} else if(variable_de_pr_2 == '5' && variable_de_pr_2 == blok_5_2){
					blok_5 = simbolo_player_2;
					blok_5_2 = simbolo_player_2;
					n = 0;
					break;
				} else if(variable_de_pr_2 == '6' && variable_de_pr_2 == blok_6_2){
					blok_6 = simbolo_player_2;
					blok_6_2 = simbolo_player_2;
					n = 0;
					break;
				} else if(variable_de_pr_2 == '7' && variable_de_pr_2 == blok_7_2){
					blok_7 = simbolo_player_2;
					blok_7_2 = simbolo_player_2;
					n = 0;
					break;
				} else if(variable_de_pr_2 == '8' && variable_de_pr_2 == blok_8_2){
					blok_8 = simbolo_player_2;
					blok_8_2 = simbolo_player_2;
					n = 0;
					break;
				} else if(variable_de_pr_2 == '9' && variable_de_pr_2 == blok_9_2){
					blok_9 = simbolo_player_2;
					blok_9_2 = simbolo_player_2;
					n = 0;
					break;
				} else {
					std::cout << "ERROR ... Deberia ser un numero del 1 al 9 y no estar ocupada por otro\n";
				}
			}
		}
	}	


	return 0;
}
