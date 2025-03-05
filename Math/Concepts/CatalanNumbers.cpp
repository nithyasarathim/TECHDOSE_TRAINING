#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cout<<"Enter the range for catalan numbers :";
    cin>>n;
    vector<long long> cat(n+1,0);
    cat[0]=1;
    cat[1]=1;
    for(int i=2;i<=n;i++){
        for(int j=0;j<i;j++){
            cat[i]+=cat[j]*cat[i-j-1];
        }
    }
    for(int i=0;i<n;i++){
        cout<<cat[i]<<" ";
    }
}

// 1 1 2 5 14 . . . . . . 