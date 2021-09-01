#include<bits/stdc++.h>

using namespace std;

/* Tail Reccursion void fun(int n){
    if(n>0){
        cout<<n<<" ";
        fun(n-1);
    }

}*/

// Head Reccursion


void fun(int n){
    if(n>0){
        fun(n-1);
        cout<<n<<" ";
    }
}

int main(){
    int n;
    cin>>n;
    fun(n);
}