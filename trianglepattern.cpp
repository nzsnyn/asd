#include <iostream>
using namespace std;

void rightAngledTriangle(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

void leftAngledTriangle(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << "  "; // Print spaces
        }
        for (int j = 1; j <= i; j++) {
            cout << "* "; // Print stars
        }
        cout << endl;
    }
}

void invertedRightAngledTriangle(int n) {
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

void invertedLeftAngledTriangle(int n) {
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++) {
            cout << "  "; // Print spaces
        }
        for (int j = 1; j <= i; j++) {
            cout << "* "; // Print stars
        }
        cout << endl;
    }
}

void equilateralTriangle(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << "  ";
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

void invertedEquilateralTriangle(int n) {
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++) {
            cout << "  ";
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}


int main() {
    int n;
    cout << "Enter the number of rows for the triangle patterns: ";
    cin >> n;

    cout << "\nRight Angled Triangle:\n";
    rightAngledTriangle(n);

    cout << "\nLeft Angled Triangle:\n";
    leftAngledTriangle(n);

    cout << "\nInverted Right Angled Triangle:\n";
    invertedRightAngledTriangle(n);

    cout << "\nInverted Left Angled Triangle:\n";
    invertedLeftAngledTriangle(n);
    
    cout << "\nEquilateral Triangle:\n";
    equilateralTriangle(n);

    cout << "\nInverted Equilateral Triangle:\n";
    invertedEquilateralTriangle(n);

    return 0;
}