#include <bits/stdc++.h>

int main()
{
    using namespace std;
    int n,h,i,w = 0;   cin >> n >> h;
    int t[n];
 
    for (i = 0  ;  i < n  ; i++)
        cin >> t[i];
    for (i = 0  ;  i < n  ;  i++)
        (t[i] > h)?w+=2:w++;
 
    cout << w;
    return 0;
}
