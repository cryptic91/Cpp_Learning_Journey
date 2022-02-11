#include <iostream>

using namespace std;

int main()
{
    printf("===================================\n");
    // xxx
    // xx
    // x

    for (int i = 1; i <= 3; i++)
    {
        for (int j = i; j <= 3; j++)
        {
            cout << "x";
        }
        cout << endl;
    }


    printf("===================================\n");

    // x
    // xx
    // xxx

    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "x";
        }
        cout << endl;
    }

    printf("===================================\n");

    // 1
    // 1 2
    // 1 2 3

    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }

    printf("===================================\n");

    // 1
    // 2 2
    // 3 3 3

    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i;
        }
        cout << endl;
    }

    printf("===================================\n");

     for(int i = 1 ; i<=3 ; i++){

      for(int j =1 ; j<=i ; j++){

          cout<< (j%2) ;

      }

      cout << endl ;
  }

    printf("===================================\n");

    return 0;
}