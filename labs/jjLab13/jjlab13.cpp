#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <sstream>

using namespace std;
int main() {
    int num;
    int total = 0;
    ifstream myfile;

    myfile.open("NumberList.txt"); 
    myfile >> num;
    string line;
    while(getline(myfile, line)) {
        istringstream ( line.c_str() ) >> num; //gets line than converts to int from string 
        total += num;
        }
        cout<< "the total is: " <<total<<endl;
    }
    
    
    

