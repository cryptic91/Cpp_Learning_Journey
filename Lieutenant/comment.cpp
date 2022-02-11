#include<iostream>

// #define PI 3.1416

/**********
 * hello there
 * This is Md. Rakibul Islam Shanto
 * C < Java < C++
 * good move huh?
 */

int main() {

    // define PI
    #define PI 3.1416 //643489234578...
    double pi = 3.1416;
    // Using std:: for 'using namespace std' >> avoiding name collutions 
    std::cout << PI << " is the value of PI.\n";

    pi ++;
    // PI ++;
    std::cout  << pi << " valu 1+\n" ;
    return 0;
}