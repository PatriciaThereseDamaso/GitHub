#include <iostream> 
#include <iomanip> 
#include <cmath> 
  
using namespace std; 
  
int HCF(int first, int second){ 
    if (second==0) 
    return first; 
    return HCF(second, first%second); 
} 
  
int main(){ 
    int a, b, hcf; 
    cout << "Enter two positive integers: "; 
    cin >> a >> b; 
 
    cout << "HCF of " << a << " " << b << " is " << HCF(a,b)<<endl; 
 
return 0; 
} 