#include<bits/stdc++.h>
using namespace std;

void fib(int n){
static int p=0,ne=1,sum=0;
    if(n>0){
        cout<<ne<<" ";
        sum=ne+p;
        p=ne;
        ne=sum;
        fib(n-1);
    }

}
// Using Iteration

int fib_it(int n){
    int p=0,ne=1,s=0;
    if(n<=1) return n;
    
    for(int i=2;i<=n;i++){
        s=p+ne;
        p=ne;
        ne=s;
    }
    return s;
}


int main(){
    int n;
    cin>>n;
    fib(n);
    cout<<"\nThe nth Term is : "<<fib_it(n)<<endl;
    return 0;
}