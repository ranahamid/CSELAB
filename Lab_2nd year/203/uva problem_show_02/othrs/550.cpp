#include <iostream>  
#include <cmath>  
#include <string>  
using namespace std;  
 int main() {  
     int base, n, m;  
     while(cin >> base >> n >> m) {  
         if(m == 1) {  
              cout << 1 << endl;  
            continue;  
          }  
       int carry = 0, cur = n, i = 1;  
         for(; ; i++)
          {  
            int tmp = cur * m + carry;  
             carry = tmp / base;  
             cur = tmp % base;  
            if(carry == 0 && cur == n) {  
                 cout << i << endl;  
              break;  
            }  
      }  
    }  
     return 0;  
 }  
