#include <bits/stdc++.h>
using namespace std;

int main() {
    int X;
    cin >> X;            
    int suffix = X % 100;  
    
    
    cout << 'K' 
         << setw(2)      
         << setfill('0') 
         << suffix
         << '\n';
    
    return 0;
}
