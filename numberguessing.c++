#include<iostream> 
 
using namespace std; 
 
int main() 
{ 
/* Game : The rule 
1. Player 1 selects a random numbers 
2. Player 2 needs to guess the number 
3. The game will tell player 2 whether the guess is too low or too high 
4. The game will count the number of attempts player 2 made */ 
 
int selectNumber = 0; 
int currentNumber = 0; 
int numberOfAttempts = 0; 
cout<<"Player 1 please enter the random number : "<<endl; 
cin>> selectNumber; 
 
while(true){ 
    numberOfAttempts++; 
    cout<<"Player 2 please guess the number : "<<endl; 
    cin>> currentNumber; 
    if(currentNumber > selectNumber){ 
    cout<< currentNumber <<" is too high"<< endl; 
    } 
    else if(currentNumber < selectNumber){ 
    cout<< currentNumber <<" is too low"<< endl; 
    } 
    else{ 
        cout<< currentNumber<<" is the right answer"<< endl; 
        break; 
    } 
} 
cout<<"Player 2 you made "<<numberOfAttempts<<" Attemps!"<<endl; 
return 0; 
}
