#include <iostream>
using namespace std;
int main() {
    int limit;
    cout << "Enter the upper limit for the loop: ";
    cin >> limit;

    for (int i = 1; i <= limit; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            cout << "FizzBuzz" << endl;
        } else if (i % 3 == 0) {
            cout << "Fizz" << endl;
        } else if (i % 5 == 0) {
            cout << "Buzz" << endl;
        } else {
            cout << i << endl;
        }
    }

    return 0;
}