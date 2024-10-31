#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void rollDice();
void exitApp();

int rollCount = 0;

int main() {
    char choice;

    srand(static_cast<unsigned int>(time(0)));

    while (true) {
        cout << "Lempar dadu Anda!";
        cin >> choice;

        if (choice == 'Lempar Dadu' || choice == 'Lempar Dadu') {
            rollDice();
        } else if (choice == 'Selesai' || choice == 'Selesai') {
            exitApp();
            break;
        } else {
            cout << "Error\n";
        }
    }

    return 0;
}

void rollDice() {
    rollCount++;
    int result = 1 + (rand() % 6);
    cout << "Hasil: " << result << endl;

    if (rollCount >= 10) {
        cout << "wpw, Anda sudah 10 kali memutar dadu!!!\n";
        rollCount = 0;
    }
}

void exitApp() {
    cout << "😡\n";
}
