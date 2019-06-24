/*			CARD GAME RANDOM CHOOSE HIGHER OR LOWER



Guess if the next card is gonna be higher or lower than this card. 
You get a wild card when Ace is the next card or the current card,because Ace is considered both as 1 and as 14 and you,
the player gets the benefit of the doubt. You also get benefit of doubt if the current card is equal to the previous one.

Other random Games to implement With hopefully better Interface
Guess the number/The Price Is Right Games
JackBlack
Russian Roulette/Josepheus 
Win Predictor for Poker,Rummy(Online Tool)

Bingo and Other Hangman and Games

Add symbols for heart using unicode and include the four suits to make it more aesthetically pleasing. 
♠ U+2660 Black Spade Suit
♡ U+2661 White Heart Suit
♢ U+2662 White Diamond Suit
♣ U+2663 Black Club Suit
♤ U+2664 White Spade Suit
♥ U+2665 Black Heart Suit
♦ U+2666 Black Diamond Suit
♧ U+2667 White Club Suit

*/
#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;
main(){
	srand(time(0));//To make sure there's no pattern and it's random 
	string chois;
	char choice;
	bool flag=true;//You choose right to play this game
	string a[14]={" A"," 2"," 3"," 4"," 5"," 6"," 7"," 8"," 9","10"," J"," Q"," K"};
	int num=rand()%14;
	int x=num;
	cout<<"\n\n\t\t The CURRENT CARD IS ";
	cout<<a[num];
	int score=0;
	
	do{
	    bool flag1=true;
		x=num;
		num=rand()%14;
	
		cout<<"\n\n \t\t GUESS IF THE NEXT CARD IS HIGHER OR LOWER? \n\n\t\tEnter h/l for higher or lower   : ";
		cin>>chois;
	    choice=chois[0];
	    
		if(x==0||num==0){
			if(choice=='l'||choice=='L'||choice=='h'||choice=='H'){
				cout<<"\n\n\t\tYOU CHOSE RIGHT!\n\n";
				flag=true;
			}
			else{
				cout<<"\n\n\n\n\t\t\tENTER A VALID CHOICE AND TRY AGAIN\n\n\n";
				flag=false;
				flag1=false;
			}
		}
		else{
			if(choice=='h'||choice=='H'){
				if(num>=x){
					cout<<"\n\n\t\tYOU CHOSE RIGHT!\n\n";
					flag=true;
				}
				else{
				    cout<<"\n\n\t\t The CURRENT CARD IS ";
	               	cout<<a[num];
					cout<<"\n\n\t\t ----------GAME OVER----------\n\n\n\n";
					flag=false;break;
				}
			}
			else{
				if(choice=='l'||choice=='L'){
					if(x>=num){
						cout<<"\n\n\t\tYOU CHOSE RIGHT!\n\n";
						flag=true;
					}
					else{
					    cout<<"\n\n\t\t The CURRENT CARD IS ";
	    	            cout<<a[num];
						cout<<"\n\n\t\t ----------GAME OVER----------\n\n\n\n";
						flag=false;break;
					}
				}
				else{
					cout<<"\n\n\n\n\t\t\tENTER A VALID CHOICE AND TRY AGAIN\n\n\n";
					flag=false;
					flag1=false;
				}
			}
		}
        if(flag1){
    		cout<<"\n\n\t\t The CURRENT CARD IS ";
	    	cout<<a[num];
        }
        if(flag){
            score++;
        }    
	}while(flag);
	
	cout<<"\n\n\t\t FINAL SCORE  : "<<score<<endl;
}