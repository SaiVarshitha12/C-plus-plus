#include <iostream>
#include <ctime>
using namespace std;
int main() {
    int num;
    int guess;
    int tries = 0;  
    srand(time(NULL));
    num = (rand() % 100) + 1;

    do {
        cout << "Enter number between 1-100: ";
        cin >> guess;

        if (guess > num) {
            cout << "Too high\n";
            tries++;
        } else if (guess < num) {
            cout << "Too low\n";
            tries++;
        } else {
            tries++;
            cout << "Correct! You guessed the number in " << tries << " tries.\n";
        }
    } while (guess != num);

    return 0;
}
