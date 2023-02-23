#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int randomInt(int min, int max) {
    return rand() % (max - min + 1) + min;
}

// Function to generate a random double in a given range
double randomDouble(double min, double max) {
    return (double)rand() / RAND_MAX * (max - min) + min;
}



// Function to generate a specified number of random values of the user's choice
void randomValues() {
    // Seed the random number generator with the current time
    srand(time(NULL));

    // Prompt the user to choose the type of value to generate
    cout << "Choose the type of value to generate:" << endl;
    cout << "1. Integer" << endl;
    cout << "2. Double" << endl;
    int choice;
    cin >> choice;

    // Generate a specified number of random values of the chosen type
    int numValues;
    if (choice == 1) {
        int min, max;
        cout << "Enter the minimum and maximum values for the integer (separated by a space): ";
        cin >> min >> max;
        cout << "Enter the number of values to generate: ";
        cin >> numValues;
        for (int i = 0; i < numValues; i++) {
            int value = randomInt(min, max);
            cout << "Random integer between " << min << " and " << max << ": " << value << endl;
        }
    } else if (choice == 2) {
        double min, max;
        cout << "Enter the minimum and maximum values for the double (separated by a space): ";
        cin >> min >> max;
        cout << "Enter the number of values to generate: ";
        cin >> numValues;
        for (int i = 0; i < numValues; i++) {
            double value = randomDouble(min, max);
            cout << "Random double between " << min << " and " << max << ": " << value << endl;
        }
    } else {
        cout << "Invalid choice." << endl;
        return;
    }
}

int main() {
    randomValues();
    return 0;
}
