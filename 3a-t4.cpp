#include<iostream>
using namespace std;
int main()
{
int x, y = 1, sum_x = 0, n; 
cout << " Enter the amount of integers to sum = ";
cin >> x;
if(x==0){
cout << " The total sum of 0 integers is: 0";
return 0;
}
do {
cout << "Enter integer nr. " << y << ": ";
cin >> n;
sum_x += n;
y++;
}
while (y <= x);
cout << " The total sum of " << x << " integers is: " << sum_x;
return 0;
}

