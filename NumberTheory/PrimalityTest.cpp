#include <iostream>
using namespace std;
bool isPrime(int n){
    if(n==1){
        return false;
    }
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
           return false; 
        }
    }
    return true;
}
int main() {
    int n;
    cin>>n;
    
    cout<<isPrime(n);
}

// Time Complexity: O(sqrt(n))
// Space Complexity: O(1)
// if A number is prime then it will have only two divisors 1 and itself.
// two factors can be for it. one should be either less than or equal to sqrt(n) and other should be greater than or equal to sqrt(n).
