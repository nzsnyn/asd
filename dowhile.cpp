#include <iostream>
using namespace std;


// The do while loop will execute the code in the loop once before checking if the variable (i) is less than 5.
// The variable (i) is increased by 1 each time the code in the loop has been executed.
int main()
{
    int i = 0;
    do {
      cout << i << "\n";
      i++;
    }
    while (i < 5);
    return 0;
}

