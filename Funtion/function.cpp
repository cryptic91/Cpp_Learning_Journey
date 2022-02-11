#include<iostream>

using namespace std;

int sum(int a, int b, int c){
    return (a+b+c) ;
}

float multiple(int x, float y){
    return (x*y) ;
}

void shanto();
void even();

int main ()  {

    int a, b, c;
    cout<< "Enter 3 numbers: ";
    cin >> a >> b >> c;

    cout << "Summation = " << sum(a,b,c) << endl;

    int num1;
    float num2;
    cout<< "Enter 1 integer + 1 float number: ";
    cin >> num1 >> num2;

    cout << "Multiple value : " << multiple(num1,num2) << endl;

    shanto();
    even();

    return 0;
}

void shanto(){
    cout << "Interger number (1-10) = " ;
    for(int i=1; i<=10; i++){
        cout << i << " " ;
    }
    cout << endl;
}

void even(){

    cout<< "Even numbers (1-20) = ";
    for(int i=1; i<=20; i++){

        if(i%2==0){
            cout << i << " " ;
        }
    }
    cout << endl;
}