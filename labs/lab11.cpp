//kaden Pirmohamed 11/29/22

#include <iostream>
using namespace std;

float CalcAvg(int tests[], int numTests/* must be > 0 */)
{
    int sum = 0;
    float avg;

    for (int i = 0; i < numTests; i++)
    {
        sum = sum + tests[i];
    }
    avg = (float)sum / numTests;
    return avg;
}


int main()
{
    const int size = 7;
    int   tests[size]; // array declaration
    int   sum = 0;
    float avg;

    // 1. Input test scores
    cout << "Enter " << 6 << " test scores: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter Test " << i + 1 << ": ";
        cin >> tests[i];
    }

         // 2. Print the first test score
         // 3. Print the last test score
         // 4. Print all scores
         // 5. Sum all scores and print the sum
         // 6. Calculate the average in main and print the average
         // 7. Calculate the average using a function and print
         //    the average in main

return 0;
}
