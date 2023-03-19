#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {
const int row =4;
const int col =7;
  int data[row][col]; 

  for(int i = 0; i <col; i++) {
 data[row][i] = i +1; 

  }
  for(int i = 0; i < row; i++) {
    for(int j = 0; j < col; j++) {
        cout << "["<<data[i][j]<<"]";
    }cout<<endl;
  }
  int nums [] = { 10, 89, 50, 24, 60, 1, 15 };

    
    cout<<nums[0]<<" "<<nums[5];
    return 0;
}