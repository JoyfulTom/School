#include <iostream>
#include <string>
using namespace std;
int main()
{
const int size = 7;//size made a constant, 7 instead of 6 to allow for 7 values to be stored
double scores[size] = {85.4, 90.3, 100, 89, 74.5, 95.0, 82.3};
double sum = 0;
for(int i = 0; i < size; i++)
{
sum += scores[i];
}
double avg = sum / 7.0;//7.0 instead of 6.0, double instead of int to prevent truncation that could lead to incorrect rounding/value
cout << "Average = " << avg << endl;
return 0;
}