#include<bits/stdc++.h>

using namespace std;

int main() {

   string myStr = "This is a sample string";
   
   char myStrChar[] = "This is a sample string";
   
   cout << "String length using string::length() function: " << myStr.length() <<endl;
   
   cout << "String length using string::size() function: " << myStr.size() <<endl;
   
   cout << "String length using strlen() function for c like string: " << strlen(myStrChar) <<endl;
   
   cout << "String length using while loop: ";
   
   // char *ch = myStrChar;
   // int count = 0;
   
   // while(*ch != '\0'){
   //    count++;
   //    *ch++;
   // }
   // cout << count << endl;
   
   cout << "String length using for loop: ";
   int count = 0;
   
   for(int i = 0; myStrChar[i] != '\0'; i++){
      count++;
   }
   cout << count;

   return 0;
}