// Task 1
// Name: Aftab Ahmed

/* AIM: Take three numbers input from keyboard and print their values in descending order. 
(Like variable a, b and c has values 7, 10 and 5 then values will be printed in order 10, 7, 5). */

#include <iostream>
using namespace std;

int main()
{
   int a, b, c, lar1, lar2, lar3;
   cout << "Enter three numbers:";
   cin >> a >> b >> c;
   lar1 = a;
   if (b > lar1 && b>c)
      lar1 = b;
   else if (b>lar1 && c>b) 
      lar1 = c;

   if (lar1 == a){
      if (b > c){
         lar2 = b;
         lar3 = c;
      }
      else{
         lar2 = c;
         lar3 = b;
      }
   }

   else{
      if (lar1 == b)
         if (a > c){
            lar2 = a;
            lar3 = c;
         }
         else{
            lar2 = c;
            lar3 = a;
         }

      else{
         if (a > b){
            lar2 = a;
            lar3 = b;
         }
         else{
            lar2 = b;
            lar3 = a;
         }
      }
   }
   cout << "Numbers in descending order :";
   cout << lar1 << " " << lar2 << " " << lar3;

   return 0;
}
