#include <iostream>
using namespace std;

int main()
{
    int i, j;
  
    // input entering number of rows
    int rows = 5;
  
    // taking first character of alphabet
    // which is useful to print pattern
    char character = 'A';
  
    // first for loop is used to identify number rows
    for (i = 0; i < rows; i++) {
      
        // second for loop is used to identify number
        // of columns based on the rows
        for (j = 0; j <= i; j++) {
          
            // printing character to get the required
            // pattern
            cout << character << " ";
        }
        cout << "\n";
      
        // incrementing character value so that it
        // will print the next character
        character++;
    }
    return 0;
}