#include <iostream>
#include <cstdlib>  // C Standard Library
#include <ctime>    // Time Library

using namespace std;

int main(){
    srand((unsigned int) time(NULL));

    int number = rand() % 100 + 1;    // modulus will return the values from 0 to 100


    int guess = 0;

    do{

        cout << "Enter Guess (1 - 100):" ;
        cin >> guess;

        if (guess > number)
            cout << "Guess Lower!" << endl;
        else if (guess < number)
            cout << "Guess Higher" << endl;
        else
            cout << "You Won" <<endl;

    } while (guess != number);

    return 0;
}