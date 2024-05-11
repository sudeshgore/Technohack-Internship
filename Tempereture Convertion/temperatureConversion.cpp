#include <bits/stdc++.h>
using namespace std;

int main() {
    float choice;
    float celsius;
    float fahrenheit;

    char ch;
    double num;



    cout << "Enter c (or C) to convert Fahrenheit to Celsius or f (or F) to convert Celsius to Fahrenheit: \n";
    cin >> ch;


    if (ch == 'c')
    {
      cout << "Enter your temperature in Fahrenheit: ";
      cin >> num;
      cout << endl;
      cout << "Your temperature in Celsius is: " << (num - 32) * (5.0/9.0) << endl;
    }

    else if (ch == 'C')
    {
      cout << "Enter your temperature in Fahrenheit: ";
      cin >> num;
      cout << endl;
      cout << "Your temperature in Celsius is: " << (num - 32) * (5.0/9.0) << endl;
    }

    if (ch == 'f')
  {
    cout << "Enter your temperature in Celsius: ";
    cin >> celsius;
    fahrenheit = (celsius * 9.0) / 5.0 + 32;
    cout << "Your temperature in Fahrenheit is: " << fahrenheit << endl;
  }

  else if (ch == 'F')
  {
    cout << "Enter your temperature in Celsius: ";
    cin >> num;
    cout << endl;
    cout << "Your temperature in Fahrenheit is: " << (num * 1.8) + (32) << endl;
  }

    return 0;
}