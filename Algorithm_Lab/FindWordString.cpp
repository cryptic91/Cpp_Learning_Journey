#include<bits/stdc++.h>

using namespace std;

int main () {

    int num;
    cin >> num;

    string s[num];

    for(int i=0; i<num; i++){
        cin >> s[i] ;
    }

    string temp;
    // cout << "Enter : " ;
    cin >> temp;
    int count = 0;

    for(int i=0; i<num; i++){
        if(s[i] == temp){
            count++;
        }
    }

    if(count == 0){
        cout << "Not Matched" << endl;
    }
    else {
        cout << "Matched" << endl;
    }

    return 0;
}

// for c users
/*
void two_d_array(){

    char name[20][20];  // [size][name_length]
    char search[20];

    int i;
    for(i=0; i<4; i++){
        cin >> name[i];
    }
    cin >> search ;

    for(int i=0; i<4; i++){
        // if(strcmp(name[i],search) = 0)
        {
            printf("Matced");
            break;
        }
    }
    if(i == 4) printf("Not Matched");
}
*/

/*
Q3. Find out the Employee
Suppose, you are working as a Data Entry Operator in a company. You have created a dataset that contains the names of N employees. Then your supervisor wants you to look for a particular employee by name. (Consider, every name in the data set is unique).
Now your task is to write a program which will help you to find out the name which your supervisor is looking for.
If found then print a message "Matched" otherwise print "Not Matched". (N.B: Without quotation) 

The first line of input will take an integer (N) which indicates the number of names in the dataset. 
Then the second line will take N space-separated strings. The third line of input will take another string as search value.  

Sample input:
5
rabbe sharif shazzad polash tutul
sharif

Sample output:
Matched

Sample input:
4
jahid nishat rasel shakib
munna

Sample output:
Not Matched
*/