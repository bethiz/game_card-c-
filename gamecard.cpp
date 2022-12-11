#include <iostream>
#include <ctime>
#include <string>
#include <cstdlib>
using namespace std;


	int player,choice; 
	string player1_name, player2_name, beyblade_name, product_code, type, plus_mode,csystem;
	char again;
	
	int main (void)
	{
	
	cout << "Please enter your name." << endl << "Player 1: ";
	getline(cin, player1_name);
	cout << "Player 2: ";
	getline(cin, player2_name);
	
	for(int p=0;p<2;p++)
	{
		player=p+1; //kira dua player
	
		cout << "The card has shuffled randomly. Please pick a card from 1 until 10: ";
		cin>>choice;
	
		int card=1;
		if(choice<=10)
	
		(srand(time(0))); //should call srand() once before rand() to generate random number 
	
		switch ((rand()%9)+1)
		{
		case 1:
			beyblade_name = "Abyss Devolos";
			product_code = "F0647";
			type = "Balance";
			csystem = "Speedstorm";
		break;
		case 2:
			beyblade_name = "Ace Dragon";
			product_code = "E7609";
			type = "Attack";
			csystem = "HyperSphere";
		break;
		case 3:
			beyblade_name = "Anubion A2";
			product_code = "E1057";
			type = "Defense";
			csystem = "Dual-Layer";
		break;
		case 4:
			beyblade_name = "Balar B4";
			product_code = "E4726";
			type = "Attack";
			csystem = "SlingShock";
		break;
		case 5:
			beyblade_name = "Crystal Dranzer";
			product_code = "F0217";
			type = "Balance";
			csystem = "Burst";
		break;
		case 6:
			beyblade_name = "Cyclone Belfyre";
			product_code = "F3965";
			type = "Stamina";
			plus_mode = "Attack";
			csystem = "QuadDrive";
		break;	
		case 7:
			beyblade_name = "Dark-X Nepstrius";
			product_code = "E4749";
			type = "Defense";
			csystem = "SlingShock";
		break;
		case 8:
			beyblade_name = "Diomedes D2";
			product_code = "E1062";
			type = "Attack";
			csystem = "Dual-Layer";
		break;
		case 9:
			beyblade_name = "Doomscizor";
			product_code = "E1033";
			type = "Attack";
			csystem = "SwitchStrike";
		break;
		case 10:
			beyblade_name = "Vatryek Wing Accel ";
			product_code = "B9492 ";
			type = "Attack";
			csystem = "Burst";
		break;
		}
		cout<<"beyblade_name:"<<beyblade_name << endl;
		cout<<"product_code:"<< product_code<< endl;
		cout<<"type:"<<type<< endl;
		cout<<"system:"<<csystem<< endl;
		}
}
	

