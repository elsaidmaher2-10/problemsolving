

#include <iostream>
using namespace std;
int readnumber(string message) {
    int number;
    do {
        cout << message << endl;
        cin >> number;
    } while (number <= 0);
        return number;
}
void reversedint() {
    int number = readnumber("Enter postivenumber");
    int  revers = 0;
    do {
        revers = number % 10;
        cout << revers << endl; 
        number = number / 10;

    } while (number != 0);
}

int main()
{
    reversedint();
}

