//triqui boseto mio 
#include <stdio.h>
#include <stdlib.h>

void loop(char c[3][3]); 
void loop2(char c[3][3]); 
void intro_primera(char c[3][3]); 
void tablero(char c[3][3]); 
void introducir(char c[3][3]); 
void introducir2(char c[3][3]);
void introducir_IA(char c[3][3]); 
int  ganar(char c[3][3]);  

int main(){
char c[3][3]; 
int a; 

printf("\nBienvenido a triqui, desea jugar contra la maquina o contra un segundo jugador ?");
printf("\nSi desea jugar contra la maquina pulse: 0");
printf("\nSi desea jugar contra un segundo jugador pulse: 1");
printf("\n\nSeleccione una respuesta: ");
scanf("%d",&a);  

if(a==0){
	loop(c); 
}
else{
	loop2(c); 
}

return 0; 
}

void loop (char c[3][3]){
	
	int i,j; 
	i=0; 
	
	intro_primera(c);
	do{
		system("cls"); 
		tablero(c); 
		
		if(i%2==0){
			introducir(c); 
		}
		else{
			introducir_IA(c); 
		}
		
		j=ganar(c); 
		
		i++; 
		
	}while(1<=9 && j==2); 
	
	system("cls"); 
	tablero(c); 
	
	if(j=0){
		printf("\n\nFelicidades has ganado la partida!\n ");
	}
	else if(j=1){
		printf("\n\nintentalo otra vez, has perdido la partida!\n");
	}
	else{ 
		printf("\n\nHa sido un empate!\n"); 
	}
}

void loop2 (char c[3][3]){
	
	int i,j; 
	i=0; 
	
	intro_primera(c);
	do{
		system("cls"); 
		tablero(c); 
		
		if(i%2==0){
			introducir(c); 
		}
		else{
			introducir2(c); 
		}
		
		j=ganar(c); 
		
		i++; 
		
	}while(1<=9 && j==2); 
	
	system("cls"); 
	tablero(c); 
	
	if(j=0){
		printf("\n\nFelicidades has ganado la partida!\n ");
	}
	else if(j=1){
		printf("\n\nintentalo otra vez, has perdido la partida!\n");
	}
	else{ 
		printf("\n\nHa sido un empate!\n"); 
	}
	
}

void intro_primera(char c[3][3]){
	int i=0;
	int j=0; 
	char aux=0; 
	aux='1'; 
	
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			c[i][j]=aux++; 	
		}
	}
}

void introducir(char c[3][3]){
	
	int i=0;
	int j=0; 
	int k=0; 
	char aux; 
	
	do{
		do{
			printf("\n\ncolocar un ficha: "); 
			fflush(stdin);
			scanf("%c", &aux); 
		}while (aux < '1' || aux > '9');  
		
		k=0;
		
		switch(aux){
				case '1':{
				i=0;
				j=0;
				if (c[i][j]== 'X' || c[i][j]== 'O'){
					k=1;
					printf("la casilla seleccionada ya esta ocupada, por favor inentelo de nuevo\n\n"); 	
				}
				break;
			}
			
				case '2':{
				i=0;
				j=1;
				if (c[i][j]== 'X' || c[i][j]== 'O'){
					k=1;
					printf("la casilla seleccionada ya esta ocupada, por favor inentelo de nuevo\n\n"); 	
				}
				break;
			}
			
				case '3':{
				i=0;
				j=2;
				if (c[i][j]== 'X' || c[i][j]== 'O'){
					k=1;
					printf("la casilla seleccionada ya esta ocupada, por favor inentelo de nuevo\n\n"); 	
				}
				break;
			}
			
				case '4':{
				i=1;
				j=0;
				if (c[i][j]== 'X' || c[i][j]== 'O'){
					k=1;
					printf("la casilla seleccionada ya esta ocupada, por favor inentelo de nuevo\n\n"); 	
				}
				break;
			}
			
				case '5':{
				i=1;
				j=1;
				if (c[i][j]== 'X' || c[i][j]== 'O'){
					k=1;
					printf("la casilla seleccionada ya esta ocupada, por favor inentelo de nuevo\n\n"); 	
				}
				break;
			}
			
				case '6':{
				i=1;
				j=2;
				if (c[i][j]== 'X' || c[i][j]== 'O'){
					k=1;
					printf("la casilla seleccionada ya esta ocupada, por favor inentelo de nuevo\n\n"); 	
				}
				break;
			}
			
				case '7':{
				i=2;
				j=0;
				if (c[i][j]== 'X' || c[i][j]== 'O'){
					k=1;
					printf("la casilla seleccionada ya esta ocupada, por favor inentelo de nuevo\n\n"); 	
				}
				break;
			}
			
				case '8':{
				i=2;
				j=1;
				if (c[i][j]== 'X' || c[i][j]== 'O'){
					k=1;
					printf("la casilla seleccionada ya esta ocupada, por favor inentelo de nuevo\n\n"); 	
				}
				break;
			}
			
				case '9':{
				i=2;
				j=2;
				if (c[i][j]== 'X' || c[i][j]== 'O'){
					k=1;
					printf("la casilla seleccionada ya esta ocupada, por favor inentelo de nuevo\n\n"); 	
				}
				break;
			}
		}
	}while(k==1); 
	c[i][j] = 'X'; 
	
}

void introducir2(char c[3][3]){
	
	int i=0;
	int j=0; 
	int k=0; 
	char aux; 
	
	do{
		do{
			printf("\n\ncolocar un ficha: "); 
			fflush(stdin);
			scanf("%c", &aux); 
		}while (aux < '1' || aux > '9');  
		
		k=0;
		
		switch(aux){
				case '1':{
				i=0;
				j=0;
				if (c[i][j]== 'X' || c[i][j]== 'O'){
					k=2;
					printf("la casilla seleccionada ya esta ocupada, por favor inentelo de nuevo\n\n"); 	
				}
				break;
			}
			
				case '2':{
				i=0;
				j=1;
				if (c[i][j]== 'X' || c[i][j]== 'O'){
					k=2;
					printf("la casilla seleccionada ya esta ocupada, por favor inentelo de nuevo\n\n"); 	
				}
				break;
			}
			
				case '3':{
				i=0;
				j=2;
				if (c[i][j]== 'X' || c[i][j]== 'O'){
					k=2;
					printf("la casilla seleccionada ya esta ocupada, por favor inentelo de nuevo\n\n"); 	
				}
				break;
			}
			
				case '4':{
				i=1;
				j=0;
				if (c[i][j]== 'X' || c[i][j]== 'O'){
					k=2;
					printf("la casilla seleccionada ya esta ocupada, por favor inentelo de nuevo\n\n"); 	
				}
				break;
			}
			
				case '5':{
				i=1;
				j=1;
				if (c[i][j]== 'X' || c[i][j]== 'O'){
					k=2;
					printf("la casilla seleccionada ya esta ocupada, por favor inentelo de nuevo\n\n"); 	
				}
				break;
			}
			
				case '6':{
				i=1;
				j=2;
				if (c[i][j]== 'X' || c[i][j]== 'O'){
					k=2;
					printf("la casilla seleccionada ya esta ocupada, por favor inentelo de nuevo\n\n"); 	
				}
				break;
			}
			
				case '7':{
				i=2;
				j=0;
				if (c[i][j]== 'X' || c[i][j]== 'O'){
					k=2;
					printf("la casilla seleccionada ya esta ocupada, por favor inentelo de nuevo\n\n"); 	
				}
				break;
			}
			
				case '8':{
				i=2;
				j=1;
				if (c[i][j]== 'X' || c[i][j]== 'O'){
					k=2;
					printf("la casilla seleccionada ya esta ocupada, por favor inentelo de nuevo\n\n"); 	
				}
				break;
			}
			
				case '9':{
				i=2;
				j=2;
				if (c[i][j]== 'X' || c[i][j]== 'O'){
					k=2;
					printf("la casilla seleccionada ya esta ocupada, por favor inentelo de nuevo\n\n"); 	
				}
				break;
			}
		}
	}while(k==2); 
	c[i][j] = 'O'; 
	
}

void introducir_IA(char c[3][3]){
	
	printf("\n\n"); 
	int i,j,k; 
	srand(NULL); 
	
	do{
		i = rand()%3;
		j = rand()%3;
		k = 0; 
		
			if (c[i][j]== 'X' || c[i][j]== 'O'){
					k=1;
			}	
	}while(k==1); 
	
	c[i][j]='O'; 
}

void tablero(char c[3][3]){
	int i=0;
	int j=0; 
	
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			if (j<2){
				printf(" %c |",c[i][j]); 	
			}	
			else{
				printf(" %c ",c[i][j]);
			}
		}
		if (i<2){
			printf("\n-----------\n");
		}
	}
}

int ganar(char c[3][3]){
	
	//primera jugada tomando en cuenta la casilla c[0][0], es decir la posición 1
	if (c[0][0]=='X' || c[0][0]=='O'){
		
		if(c[0][0]==c[0][1] && c[0][0]==c[0][2]){
			if(c[0][0]=='X'){
				return 0; //he ganado
			}
			else{
				return 1; //he perdido
			}
		}
		
		if(c[0][0]==c[1][0] && c[0][0]==c[2][0]){
			if(c[0][0]=='X'){
				return 0; //he ganado
			}
			else{
				return 1; //he perdido
			}
		}
	}
	
	//segunda jugada tomando en cuenta la casilla c[1][1], es decir la posición 5
	if (c[1][1]=='X' || c[1][1]=='O'){
		
		if(c[1][1]==c[0][0] && c[1][1]==c[2][2]){
			if(c[1][1]=='X'){
				return 0; //he ganado
			}
			else{
				return 1; //he perdido
			}
		}
		
		if(c[1][1]==c[0][1] && c[1][1]==c[2][1]){
			if(c[1][1]=='X'){
				return 0; //he ganado
			}
			else{
				return 1; //he perdido
			}
		}
		
		if(c[1][1]==c[1][0] && c[1][1]==c[1][2]){
			if(c[1][1]=='X'){
				return 0; //he ganado
			}
			else{
				return 1; //he perdido
			}
		}
		
		if(c[1][1]==c[2][0] && c[1][1]==c[0][2]){
			if(c[1][1]=='X'){
				return 0; //he ganado
			}
			else{
				return 1; //he perdido
			}
		}
	}
	
	//tercera jugada tomando en cuenta la casilla c[2][2], es decir la posición 9
	if (c[2][2]=='X' || c[2][2]=='O'){
		
		if(c[2][2]==c[2][0] && c[2][2]==c[2][1]){
			if(c[2][2]=='X'){
				return 0; //he ganado
			}
			else{
				return 1; //he perdido
			}
		}
		
		if(c[2][2]==c[0][2] && c[2][2]==c[1][2]){
			if(c[2][2]=='X'){
				return 0; //he ganado
			}
			else{
				return 1; //he perdido
			}
		}
	}
	return 2; 
}

