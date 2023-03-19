#include <iostream>
#include<string>
using namespace std;
int solveSum(int n1, int n2){
    return n1 + n2;
};
class calc { public:
    void add(int& sum, int n1, int n2) { sum = n1 + n2; }
    void sub(int& sum, int n1, int n2) { sum = n1 - n2; }
    void mult(int& sum, int n1, int n2) { sum = n1 * n2; }
    void div(float& sum, float n1, float n2) {
        while (true) {
            if (n2 == 0) {
                cout << "ERROR cant divide by 0\nEnter two float values\n"; cin >> n1 >> n2;
            
            }
            else { sum = n1 / n2;
            cout << n1 << " / " << n2 << " is " << sum << endl; 
            break;}
        }
    }
    void mod(int& sum, int n1, int n2) {
        while (true) {
            if (n2 == 0) {
                cout << "ERROR cant divide by 0\nEnter two int values\n"; cin >> n1 >> n2;
            }
            else { break; }
        }
        sum = n1 % n2;
        cout << n1 << " mod % " << n2 << " is " << sum << endl;
    }
};
        
        


int main()
{
    int num1;  int num2; int sum; int counter; int  diff; int mod; int  prod; float quot;
    calc solve;
    while (true)
    {
        cout << "Enter two integer values\n"; cin >> num1 >> num2;
        solve.add(sum, num1, num2);
        cout << num1 << " + " << num2 << " is " << sum << endl;
        solve.sub(diff, num1, num2);
        cout << num1 << " - " << num2 << " is " << diff << endl;
        solve.mult(prod, num1, num2);
        cout << num1 << " * " << num2 << " is " << prod << endl;
        solve.div(quot, float(num1), float(num2));
        solve.mod(mod, num1, num2);
        
        
        counter = 1;
        cout << "counter is " << counter << endl;


        counter = counter + 3;
        cout << "counter is " << counter << endl;


        counter += 2;
        cout << "counter is " << counter << endl;
        


        counter++;
        cout << "counter is " << counter << endl;
        string temp;
        cout << "would you like to run again y/n: "; cin >> temp; 
        if (temp == "n") { cout << " good bye "; break; }
         
        
    }return 0;
}


