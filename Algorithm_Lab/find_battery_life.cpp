// unfinished

#include<bits/stdc++.h>

using namespace std;

int main () {

    int n, m, d, life;

    cin >> n >> m ;

    d = n%(n/m);

    int min = 0;

    for(int i=n; i>=m; i= i-d){
        min++;
    }

    cout << min << endl;

    return 0;
}


/*
Q2. Find the battery life of a billionaire's phone
Recently, Mark is facing a problem. Though he is a billionaire, his phone is very old and behaves strangely. One day, he noticed that his phone has N% charge but after every M minutes  (N/M)% of total charge is decreasing even if he doesn’t touch the phone. He was worried about how much time he could get to use the phone before it turns off.

The phone behaves strangely because the charge capacity can be more than 100% and the phone will be turned off if the charge becomes lower than M.

Now you have to find out how much time it will take to finish the N% charge.

N.B: If N/M gives a floating point number then consider it as a floor integer. For example: if N/M gives 4.68 then consider as 4.
This is an imaginary phone and should not be compared with a real phone.

10<=N<=1000
3<=M<N

Input: N, the initial amount of charge available in the phone.
M, the time (in minutes) interval, the phone discharges.
Output: Display the total time taken before the phone turns off.

sample input:
10 3
sample output:
15

sample input:
20 4
sample output:
32

*/