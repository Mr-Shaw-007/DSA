#include<bits/stdc++.h>
using namespace std;

double taylor(int x, int n){// x is the power of e(e^x) and n is numer of elemets you want 
    static double p=1,f=1;
    double sum;

    if(n==0) return 1;
    sum=taylor(x,n-1);
    p=p*x;
    f=f*n;
    return sum+p/f;

}


int main(){
    
    cout<<taylor(1,10)<<endl;
    return 0;

} 

// Result of taylor series is value of e^x if x=1 , e^1 is the value
// Number of Multiplication required= n(n+1)

// It is order of O(n^2)



