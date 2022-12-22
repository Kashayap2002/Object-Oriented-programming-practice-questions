#include <iostream>
using namespace std;
int main() {
   char a;
   cout<<"Enter any alphabet:";
   cin>>a;

   if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u' || a == 'A' ||
    a == 'E' || a == 'I' || a == 'O' || a == 'U')
   cout <<a<< " is a Vowel" << endl;
   else
   cout <<a<< " is a Consonant" << endl;
   return 0;
}