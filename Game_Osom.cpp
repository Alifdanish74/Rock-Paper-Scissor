/*
	Created by : ALif Danish
	Date : 20 / Jan / 2020
	
	This program allowed you to play Rock Paper Scissor with computer (Auto generated)
*/

#include <iostream>
#include <string>
#include <unistd.h>
#include <cstdlib>
using namespace std;

int osom (int);
int random (int);
void result (int , int , int*score);

int main(){
	char start;
	int Select ,totalscore =0 , totalgame=1;
	cout << "Enter 's' to start the game \n";
	cin >> start;
	
	cout << "\t The game has started ! \n\n";
	cout << "\t Let's play the game ! \n\n";
	
	while(start != 'q' && start == 's'){
		int Score=0 ;
		cout << "Enter 1: Rock \t 2:Paper \t 3:Scissor \n\n";
		cin >> Select;
		osom (Select); // calling the osom function
		
		int Random = (rand() % 3) + 1;
		random (Random);
		
		result (Random , Select , &Score );
		
	//*******************************************************
	cout << "Enter 's' to start the game \t Enter 'q' to quit the game \n";
	cin >> start;
	totalscore = totalscore + Score;
	totalgame++;
	}
	
	cout << "\nThank you for playing ! \n";
	cout << "Total game : " << totalgame << endl;
	cout << "Total score : " << totalscore << endl;
	sleep(1.05);
	
}
// Function for user enter
int osom (int select){
	switch (select){
		case 1:
			cout << "You have choose Rock \n\n";
		break;
		
		case 2:
			cout << "You have choose Paper \n\n";
		break;
		
		case 3:
			cout << "You have choose Scissor \n\n";
		break;
		default:
			cout << "You entered the wrong number \n\n";
	}
	return select;
}
//Function for random number

int random (int Rand){
		
		switch (Rand){
		case 1:
			cout << "Computer have choose Rock \n\n";
		break;
		
		case 2:
			cout << "Computer have choose Paper \n\n";
		break;
		
		case 3:
			cout << "Computer have choose Scissor \n\n";
		break;
	
	}
	return Rand;
		
}
// Function for result

void result ( int comp , int user , int *score){
	if(comp == 1 && user==3 || comp == 2 && user== 1 || comp == 3 && user==2 ){
		cout << "==========================\n";
		cout << "=  SORRY ! YOU LOSE !    =\n";
		cout << "==========================\n";
	}
	
	if(user == 1 && comp ==3 || user == 2 && comp == 1 || user == 3 && comp==2 ){
		cout << "==========================\n";
		cout << "=  YEAY ! YOU WON !      =\n";
		cout << "==========================\n\n\n";
		*score = 1;
	}
	if(comp == 1 && user==1 || comp == 2 && user== 2 || comp == 3 && user==3 ){
		cout << "==========================\n";
		cout << "=  IT'S A DRAW !!!!      =\n";
		cout << "==========================\n";
	}

}

