//https://cses.fi/problemset/task/1621
#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n;
  vector<int> a;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    int temp;
    cin >> temp;
    a.push_back(temp);
  }
  sort(a.begin(), a.end());
   int num=1;
  for (int i = 0; i < (n-1); i++)
  {
    if(a[i]!=a[i+1]) num++;
  }
   cout<<num;
}
