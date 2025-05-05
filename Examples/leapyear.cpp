/*
A year in the modern Gregorian Calendar consists of 365 days. In reality, the earth takes longer to rotate around the sun. To account for the difference in time, every 4 years, a leap year takes place. A leap year is when a year has 366 days: An extra day, February 29th. The requirements for a given year to be a leap year are:

1) The year must be divisible by 4

2) If the year is a century year (1700, 1800, etc.), the year must be evenly divisible by 400; therefore, both 1700 and 1800 are not leap years

Some example leap years are 1600, 1712, and 2016.

Write a program that takes in a year and determines whether that year is a leap year.

Ex: If the input is:

1712
the output is:

1712 - leap year
Ex: If the input is:

1913
the output is:

1913 - not a leap year
*/
#include <iostream>
using namespace std;

int main() {
   int inputYear;
   bool isLeapYear = false;
   
   cin >> inputYear;
   
   if ((inputYear % 4) == 0) {         // inputYear is divisible by 4
      if ((inputYear % 100) == 0) {    // inputYear is divisible by 100 (century year)
         if ((inputYear % 400) == 0) { // inputYear is divisible by 400
            isLeapYear = true;
         }
         else {                        // inputYear is not divisible by 400
            isLeapYear = false;
         }
      }
      else {                           // inputYear is not divisible by 100
         isLeapYear = true;
      }
   }
   else {                              // inputYear is not divisible by 4
      isLeapYear = false;
   }
   
   if (isLeapYear) {
      cout << inputYear << " - leap year" << endl;
   }
   else {
      cout << inputYear << " - not a leap year" << endl;
   }    

   return 0;
}
