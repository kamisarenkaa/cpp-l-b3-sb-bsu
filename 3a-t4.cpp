#include<iostream>
using namespace std;
int main()
{
int x, y = 1, sum_x = 0, number;
cout << " Enter the amount of integers to sum = ";
cin >> x;
while (!cin || (cin.peek() != '\n'))
{
cin.clear();
while (cin.get() != '\n');
cout << "Please, enter an integer" << endl;
cin >> x;
}
if(x==0){cout << " The total sum of 0 integers is: 0"; return 0;}
do {
cout << "Enter integer nr. " << y << ": ";
cin >> number;
while (!cin || (cin.peek() != '\n'))
{
cin.clear();
while (cin.get() != '\n');
cout << "Please, enter an integer" << endl;
cin >> number;
}
sum_x += number;
y++;
} while (y <= x);
cout << " The total sum of " << x << " integers is: " << sum_x;
return 0;
}
