#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            cout<<i<<" ";
        }
    }
}

// Time Complexity: O(n)
// Space Complexity: O(1)
// Factors of a number are the numbers which divides the number completely.