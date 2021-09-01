#include<bits/stdc++.h>

using namespace std;

int exponent(int b,int p){
    if(p==0) return 1;

    return b*exponent(b,p-1);

}


int main(){
    int b,p;
    cout<<"Enter Base and Power"<<endl;
    cin>>b>>p;
    cout<<"The Answer is :"<<exponent(b,p)<<endl;
    return 0;
}