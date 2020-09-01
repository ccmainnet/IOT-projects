//
//  main.cpp
//  headsortails_functions
//
//  Created by Bob on 01/09/2020.
//  Copyright © 2020 CCMainnet. All rights reserved.
//  Just anaother way of coding, possible even more is possible ;)
//  modified

#include <iostream>
#include <ctime>
using namespace std;

char headsOrTailsGuess;

void displayEndGameMessage(){
    cout << "Sorry to see you go, maybe better luck next time!!" << endl;
}
void displayLuckyAgainMessage(){
    cout << "Ok, Let's see how lucky you are, (H)eads OR (T)ails" << endl;
}
void displayItsHeadsMessage(){
    cout << "You have got it right, it's HEADS! - Play once more? (Y/N)" << endl;
}
void displayItsTailsMessage(){
    cout << "You have got it right, it's TAILS!  - Play once more? (Y/N)" << endl;
}


void resultCoin(){
    char playAgain;
    srand( (unsigned int) time(NULL));
    int randomNumber = rand()%2;
  //Is it heads
    if(randomNumber == 1 && headsOrTailsGuess == 'H'){
        displayItsHeadsMessage();
        cin >> playAgain;
        if(playAgain == 'Y'){
            displayLuckyAgainMessage();
            cin >> headsOrTailsGuess;
            resultCoin();
    }
        else if(playAgain == 'N'){
            displayEndGameMessage();
        }
}
    //Is it Tails
    else if(randomNumber == 0 && headsOrTailsGuess == 'T'){
        displayItsTailsMessage();
        cin >> playAgain;
        if(playAgain == 'Y'){
            displayLuckyAgainMessage();
            cin >> headsOrTailsGuess;
            resultCoin();
    }
        else if(playAgain == 'N'){
            displayEndGameMessage();
        }
}
    else {
        cout << "That is too bad you got it wrong... Want to try again? (Y/N)" << endl;
        cin >> playAgain;
        if(playAgain == 'Y'){
            cout << "Ok, try again... (H)eads OR (T)ails" << endl;
            cin >> headsOrTailsGuess;
            resultCoin();
        }
        else if(playAgain == 'N'){
            displayEndGameMessage();
        }
        else{
            cout << "Input error, try again... You can only use H or T and Y or N. To try again type H or T to choose between Heads or Tails " << endl;
            cin >> playAgain;
            resultCoin();
        }
        
    }
}



int main(int argc, const char * argv[]) {
    
    cout << "Welcome to the coin flip game" << endl << endl;
    cout << "Player, type a (H)eads or (T)ails to flip the coin" << endl;
    cin >> headsOrTailsGuess;
    resultCoin();

    return 0;
    }
