#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;
    int b;
    int c; 
    int count = 0 ;
    cin >> a >> b >> c ;
    for (int t = a ; t <= b ; t++){
        if (c % t == 0){
            count++ ;
        }
       }    
    
    cout << count << endl ;
    return 0;
}


