//Note to self: Need to get a life.
//Note to self: This is a comment.
//Note to self: Going to make a number guessing game.

#include <iostream>
#include <string>
#include <stdlib.h>// srand, rand
#include <time.h>// to use the system clock.
using namespace std;
int lives = 3; // 3 lives in this game

int main () //int = interger = whole positive/negative numbers
{

    srand(time(NULL));
    int number = rand() % 5 + 1;
    int guess;
    cout << "Welcome to the Rice Fields, motherf&$@*ss" << endl;
    cout << "Guess the Random number, chicken-s*#@!" << endl;
    cin >> guess;
    do {




    if (guess > number)

    {

      cout << "Too high, jackass! Guess again!" << endl;
      cout << "I am your god! ";
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

      cout << "Congradu-fucking-lations, you stupid-ass! Now get ready for the next level!";
      break;

    }




    // number contains random number (1:5)
    //random number 1:5, 5:25, 25:50, 50:100, poopy:mydick
    //input guess

    //guess > numbers: guess lower
    //guess < numbers: guess higher
    //guess == number: You are correct, increase the number pool.






//Note to self: Always end functions with a semi-coloun except when it is using a squiggly bracket
//Note to self: cout stands for see output and endl means end line for the saying.
}  while (lives < 0);

cout << "You just lost to a computer than was coded in only a week! Game over!";
cout << "Kill yourself! *Note: This game was mearly a test in text gaming and it does not condone the subject of suicide. Please mearly load up to last save and play again if you wish.";

  return 0;
}
