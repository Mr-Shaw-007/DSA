#include<bits/stdc++.h>
using namespace std;

int fact(int x);

float combination(int n, int r){
   int t1,t2,t3;
   t1=fact(n);
   t2=fact(r);
   t3=fact(n-r);
   return t1/(t2*t3);

}

int fact(int x){
    if(x==0) return 1;
    return fact(x-1)*x;
}

//Using Pascals Traingle

float ps_comb(int n, int r){
    if(n==r || r==0) return 1;
   return  ps_comb(n-1,r-1) + ps_comb(n-1,r);
}

int main(){
    int n,r;
    cin>>n>>r;
    cout<<"The value of nCr is  "<<combination(n,r)<<endl;
    cout<<"The value using pascals traingle "<<ps_comb(n,r)<<endl;

}



