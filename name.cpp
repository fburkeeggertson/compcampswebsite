//Note to self: Need to get a life.
//Note to self: This is a comment.
//Note to self: Going to make a number guessing game.
//to create simple yes/no statement, use a boolean such as bool add x+y
//int(answer 10) { return true} if (answer < 10) { return false}
//another data type is void functions, which do not return anything at all, but do show a message visually.
//void function example: cout << "Game Over" << endl;
//Global variables
// number contains random number (1:5)
//random number 1:5, 5:25, 25:50, 50:100, poopy:scoopy
//input guess
//guess > numbers: guess lower
//guess < numbers: guess higher
//guess == number: You are correct, increase the number pool.
//Note to self: Always end functions with a semi-coloun except when it is using a squiggly bracket
//Note to self: cout stands for see output and endl means end line for the saying.

#include <iostream>
#include <string>
#include <stdlib.h>// srand, rand
#include <time.h>// to use the system clock.
using namespace std;
int lives = 3;
int number;
int guess;

string ArrayName[3][2];
string ArrayName[2][1];

bool guessing (int RandomNumber);

void levelOne();
void levelTwo();
void levelThree();
// 3 lives in this game
//int lives is a global function and can be used in any part of the code once recognized.
 //int = interger = whole positive/negative numbers
 int main ()
{

    srand(time(NULL));  //this is the main function, you can tell by the name after

  return 0;
}

bool guessing (int number)
{
  do {




  if (guess > number)

  {

    cout << "Too high, jackass! Guess again!" << endl;
    cout << "I am your god!";
    cin >> guess;
    lives--;

  }

  if (guess < number)
  {

    cout << "Holy f$%#, too high!";
    cin >> guess;
    lives--;



  }
    if (guess == number)
  {

    cout << "No! I'm a god! Your just a big, stupid, uhh, poopy head!!";
    cout << "S-Shut up! F### you! Next level!";
    break;

  }

}  while (lives < 0);
  cout <<"Game over, bitch! Go cry to your mama!" << endl;
  return false;






}

void levelOne()
{

  number = rand() % 5 + 1;
  cout << number;
  if (guessing (number))   {
    levelTwo();
  }

}

void levelTwo()
{

  number = rand() % 25+ 50;
  cout << number;
  if (guessing (number))   {
    levelThree();

}

void levelThree
}
