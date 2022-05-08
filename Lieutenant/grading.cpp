#include<iostream>

using namespace std;

int main () {

    float mark;
    cout << "Enter mark: ";
    cin >> mark;

    if (mark <= 100 || mark >=0){

        if(mark>=80){
            cout << "Your grade is A+ & CG = 4.00" << endl;
        }
        else if(mark >= 75 && mark <= 79){
            cout << "Your grade is A & CG = 3.75" << endl;
        }
        else if(mark >= 70 && mark <= 74){
            cout << "Your grade is A- & CG = 3.50" << endl;
        }
        else if(mark >= 65 && mark <= 69){
            cout << "Your grade is B+ & CG = 3.25" << endl;
        }
        else if(mark >= 60 && mark <= 69){
            cout << "Your grade is B & CG = 3.00" << endl;
        }
        else if(mark >= 55 && mark <= 59){
            cout << "Your grade is B- & CG = 2.75" << endl;
        }
        else if(mark >= 50 && mark <= 54){
            cout << "Your grade is C+ & CG = 2.50" << endl;
        }
        else if(mark >= 45 && mark <= 49){
            cout << "Your grade is C & CG = 2.25" << endl;
        }
        else if(mark >= 40 && mark <= 44){
            cout << "Your grade is D & CG = 2.00" << endl;
        }
        else if(mark >= 0 && mark <= 39){
            cout << "You have failed !!!" << endl;
        }

    }
    else {
        cout << "Invadil mark !!!" << endl;
    }

    return 0;
}