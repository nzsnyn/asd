#include <iostream>
using namespace std;

int main()
{
    // Outer loop
    for (int i = 1; i <= 2; ++i) {
        cout << "Outer: " << i << "\n";
        
        // Inner loop
        for (int j = 1; j <= 3; ++j) {
          cout << " Inner: " << j << "\n"; 
        }
    }
    return 0;
}

