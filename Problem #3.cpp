#include <iostream>
using namespace std;

// دالة لقراءة عدد صحيح موجب
int readNumber(string message) {
    int number;
    do {
        cout << message << endl;
        cin >> number;
    } while (number <= 0);
    return number;
}

bool isPerfect(int number) {
    int sum = 0;
    for (int i = 1; i < number; i++) {
        if (number % i == 0) {
            sum += i;
        }
    }
    return number == sum;
}

void printAllPerfectNumbers(int number) {
    for (int i = 1; i < number; i++) {
        if (isPerfect(i)) {
            cout << i << " is perfect" << endl;
        }
    }
}

int main() {
    int number = readNumber("Enter a positive number:");
    cout << "Perfect numbers up to " << number << " are:" << endl;
    printAllPerfectNumbers(number);
    return 0;
}
