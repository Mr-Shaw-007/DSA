#include<bits/stdc++.h>

using namespace std;

int natural(int n){

    if(n==0) return 0;

    return natural(n-1)+n;
}

int main(){
    int n;
    cin>>n;
    int x=natural(n);
    cout<<"The Sum of The Nartural Number is : "<<x<<endl;
}