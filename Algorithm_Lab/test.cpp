#include <bits/stdc++.h>

using namespace std;

int main()
{

  int n;
  cin >> n;

  int arr[n];

  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  int s, c, num, total = 0;
  cin >> s;

  sort(arr, arr + n, greater<int>());

  int i = 0, j = 0;
  pair<int, int> pair[20];

  while (s > 0)
  {

    if (arr[i] <= s)
    {
      c = arr[i];
      num = s / c;

      pair[j].first = c;
      pair[j].second = num;
      j++;

      total += num;

      s -= num * c;
    }

    i++;
  }

  if (s > 0)
  {
    cout << "Impossible" << endl;
  }
  else
  {
    cout << total << endl;

    for(int k=0; k<j; k++){
      for(i=0; i<pair[k].second; i++){
        cout << pair[k].first << " " ;
      }  
    }
  }
  // cout << total << endl;

  return 0;
}