#include<bits/stdc++.h>
using namespace std;



// Taylor Series Using Homoe's Rule-> By taking common reducing the number of multiplication required

//Now it has become order of O(n)

// Using Loop since the value is calculated during run time only

double taylor(int x,int n){
    static double sum=1;
    double num=1;
    double den=1;
    for(int i=1;i<=n;i++){
        num=num*x;
        den=den*i;
        sum+=num/den;

    }
    return sum;
}

//Using Reccursion

double taylor_r(int x,int n){
    static double sum=1;
    if(n==0) return sum;

    sum=1+x*sum/n;
   return taylor_r (x,n-1); 

}

int main(){
    int x,n;
    cout<<"Give the Value of x and n   ";
    cin>>x>>n;
    cout<<"The value is "<<taylor(x,n)<<endl;
    cout<<"The value using Reccursio "<<taylor_r(x,n)<<endl;


}

