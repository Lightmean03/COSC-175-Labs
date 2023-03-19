#include <iostream>

using namespace std;


int main() {
    char userChoice; int answer;
    int x,y; 
    cout<<"\n\n\n\n\n\n\n\n\n\n";
    cout<<"enter first numer: ";
    cin>>x;
    cout<<"enter second number: ";
    cin>>y;
    cout<<"+ - * /: ";
    cin>>userChoice;
    
    switch (userChoice)
    {
    case '+': answer = x+y;
        break;
    case '-': answer = x-y;
        break;
    case '*': answer = x*y;
        break;
    case '/': answer = x/y;
        break;
    default: cout <<"Error! that is not a valid input"<<endl;
        break;
    }
cout <<"the answer is "<< answer; 
return 0;
}