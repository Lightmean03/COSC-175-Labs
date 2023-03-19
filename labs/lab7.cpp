//kaden pirmohamed
#include <iostream>
using namespace std;
void Double(int value);
int main()
{
	int cost;
	cost = 25;
	Double(cost);
	cout << cost << endl;
}
void Double(int value)
{
	value = value + value;
}
