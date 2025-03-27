
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    
    srand(time(0));   // Seed the random number generator with the current time 
					  //rand() is seeded with srand() w. time Otherwise everytime same random number will be generated

    int guess;
	int attempts = 0;
	int randomNumber;

    cout << "Welcome to the number guessing game!\n";
    cout << "I have selected selected a number between 1 and 10. Try to guess it\n";

    do {
		 randomNumber = rand() % 10 + 1; // random number between 1 and 10
		cout << "Enter your guess: ";
		cin >> guess;
        attempts++;
        if(guess>randomNumber)
			cout << "Too high.. the correct number is " << randomNumber << ". Try again!\n";
		else if (guess < randomNumber)
			cout << "Too low.. the correct number is " << randomNumber << ". Try again!\n";
		else
			cout << "Congratulations! You guessed the number in " << attempts << " attempts.\n";
    }while (guess != randomNumber);


	cout << "Thank you for playing the number guessing game!\n";
	return 0;

 
}