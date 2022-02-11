#include<iostream>
#include<math.h>

using namespace std;

/*********
 * can't repeat a variable with different data types
 * like int a / double a
 * use int a1 / double a2
 */

int main () {

    double area, h=5, b1=4.5;
    area = .5 * h * b1;
    cout << "Area of a triangle : " << area;    

    int n1 = 100;
    int sum = (n1*(n1+1))/2;
    cout << "\nSum of 'n' numbers : " << sum;    
    
    double p, l=5.5, b2=4.5;
    p = 2*(l+b2);
    cout << "\nperimeter of Rectangle : " << p;    
    
    int s, a1=3, n2=4, d=2;
    s = a1 + (n2-1)*d ;
    cout << "\nNth term of Arithmetic Progression series : " << s;    
    
    double root1, root2, a2=3,b3=2,c=-4;
    root1 = ( -b3 + sqrt(b3*b3 - 4*a2*c) )/ 2*a2 ;
    root2 = ( -b3 -( sqrt(b3*b3 - 4*a2*c) ) )/ 2*a2 ;
    cout << "\nRoots of a Quadratic Equation : " << root1;    
    cout << "\nRoots of a Quadratic Equation : " << root2;    

    double s1, v=3.5,u=2.7,a3=3.9;
    s1 =( v*v - u*u ) / 2*a3 ;
    cout << "\nDistance : " << s;

    return 0;
}