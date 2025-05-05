/*
Primary U.S. interstate highways are numbered 1-99. Odd numbers (like the 5 or 95) go north/south, and evens 
(like the 10 or 90) go east/west. Auxiliary highways are numbered 100-999, and service the primary highway indicated 
by the rightmost two digits. Thus, I-405 services I-5, and I-290 services I-90. Note: 200 is not a valid auxiliary highway 
because 00 is not a valid primary highway number.

Given a highway number, indicate whether it is a primary or auxiliary highway. If auxiliary, indicate what primary highway 
it serves. Also indicate if the (primary) highway runs north/south or east/west.

Ex: If the input is:

90
the output is:

I-90 is primary, going east/west.
Ex: If the input is:

290
the output is:

I-290 is auxiliary, serving I-90, going east/west.
Ex: If the input is:

0
the output is:

0 is not a valid interstate highway number. 
Ex: If the input is:

200
the output is:

200 is not a valid interstate highway number. 
*/

#include <iostream>
using namespace std;

int main() {
   int highwayNumber;
   int primaryNumber; 
   
   cin >> highwayNumber;

   // Output whether the highway is auxiliary (serving which primary), or primary
   if ((highwayNumber < 1) || (highwayNumber > 999) || ((highwayNumber % 100) == 0)) { // Invalid
      cout << highwayNumber << " is not a valid interstate highway number." << endl;
   }
   else { // Valid
        //A simple number comparison
      if (highwayNumber > 99) {
         cout << "I-" << highwayNumber << " is auxiliary";
         // Get the primary using the modulus % operation
         primaryNumber = highwayNumber % 100; // Gets the rightmost 2 digits
         cout << ", serving I-" << primaryNumber;
      }
      else { // Must be 1-99
         primaryNumber = highwayNumber; 
         cout << "I-" << primaryNumber << " is primary";
      } 
      
      // Ready now to output the direction.
      //again with the modulus 
      if ((primaryNumber % 2) == 0) { // Even
         cout << ", going east/west." << endl;
      }
      else { // Odd
         cout << ", going north/south." << endl;
      }
   }
         
   return 0;
}
