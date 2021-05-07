#include<bits/stdc++.h>
using namespace std;
int main() {
    int i=1;
    int x;
    int y;
    while(1) {
    cin >> x >> y ;
    if (x==0 && y==0) break ;
    if (x<y) {
        cout << x <<" "<< y << endl;     
        i++;
        }
    else  {
        cout << y <<" "<< x << endl;
        i++;
        }    
    }
    return 0;
}

