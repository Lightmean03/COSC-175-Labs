#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <sstream>

using namespace std;
int main() {
    int grade;

    ifstream myfile;

    myfile.open("words.txt"); 
    myfile >> grade;
    string line;
    while(getline(myfile, line)) {
        istringstream ( line.c_str() ) >> grade; //gets line than converts to int from string 
        cout<<"you scored "<<grade <<"%\n";
        if(grade >=90){cout<<"Your grade is and A\n";}
        else if(grade >=80){cout<<"Your grade is B\n";}
        else if(grade >=70){cout<<"Your grade is C\n";}
        else if(grade >=60){cout<<"Your grade is D\n";}
        else{cout<<"Your grade is E\n";}
    }
    
    
    
}
