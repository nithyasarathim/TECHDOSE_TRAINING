#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    bool prime[n+1];
    for(int i=2;i<=n;i++){
        prime[i]=1;
    }
    for(int i=2;i*i<=n;i++){
        if(prime[i]){
            for(int j=2;i*j<=n;j++){
                prime[i*j]=0;
            }
        }
    }
    for(int i=0;i<=n;i++){
       if(prime[i]){
           cout<<i<<" ";
       }
    }
}

//find the primes upto root(n)
//eliminate its multiples
//time complexity: O(nlog(logn))
//space complexity: O(n)