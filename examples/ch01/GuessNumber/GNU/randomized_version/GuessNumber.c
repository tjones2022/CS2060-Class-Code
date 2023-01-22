/*
* The program randomly generates numbers   
* between 1 and 1000 for the user to guess.
*/


// These are all additional tags that will aid in the proccessing
//For instance stdbool.h is the code that helps the program know booleans are present.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

// The constants (MIN_NUMBER) are defined here
#define MIN_NUMBER 1

//This is another way to define a constant
const int MAX_NUMBER = 100;

//This is were you establish functions/methods that will be used
void guessGame(void); 
bool isCorrect(int, int); 


int main(void)
{
    // Does this function update the time spent on the game?
   srand(time(0));

   //This is where you calling the function in the main
   guessGame(); 

   // Is this code similiar to break?
   return 0;
}

//this is a function that will not return anything. All of the variables
//are not read after the completion of the function.
void guessGame(void)
{
    //these are all the variables that will be used
   int answer = 0; 
   int guess = 0; 
   int response = 0; 

   do {

       //I think this is setting answer to the sum of MIN_NUMBER and
       //a random number. Division is also included.
      answer = MIN_NUMBER + rand() % MAX_NUMBER;


      //this is a display method that allows you to modify the formating of the print statement
      printf("Hello, I have a number between %d and %d .\n" 
          "Can you guess my number?\n"
           "Please type your first guess.", MIN_NUMBER, MAX_NUMBER);

      //this do function is supposed to get an input from the user and 
      //if the answer is correct, a statement of completion is provided
      do
      {
          //Taking input from the users
          scanf("%d", &guess);
      } while (!isCorrect(guess, answer));
         
      //This is similiar to the print statement, but can not use modifyers
    
      puts("\nExcellent! You guessed the number!\n"
         "Would you like to play again?");

      printf("%s", "Please type ( 1=yes, 2=no ) ");
      scanf("%d", &response);

      puts("");
   } while (response == 1);
} 

//this is the function is for finding the correct answer
bool isCorrect(int g, int a)
{
    //Does this function immeditially mean that found is false?
    bool found = false;

    //This if statement is supposed to analyze and compare the previous number to the current number
    //, while slowly guiding the user to a correct answer.
    if (g == a){
        found = true;
    }else  if (g < a)
      printf( "%s", "Too low. Try again.\n? " );
   else
      printf( "%s", "Too high. Try again.\n? " );

    //I believe that when the correct answer is provided, true is returned
   return found;
} 

