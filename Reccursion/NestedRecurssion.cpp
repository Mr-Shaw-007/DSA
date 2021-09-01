#include<bits/stdc++.h>
using namespace std;

int fun(int n){
    if(n>100) return n-10;
    else return fun(fun(n+11));
}


int main(){
    int n;
    cin>>n;
    int x=fun(n);
    cout<<x<<" ";
    return 0;

}
// For any value this program will return 91 (n<100)