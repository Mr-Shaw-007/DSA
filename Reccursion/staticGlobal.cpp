#include<bits/stdc++.h>

using namespace std;

// int fun(int n){
//     if(n>0){
//         return fun(n-1)+n;

//     }
//     return 0;
// }


int fun(int n){

    static int x=0; // This is executed only during loading time
    if(n>0){
        x++;
        return fun(n-1)+x;

    }
    return 0;
}

int main(){
    int n;
    cin>>n;
    int t;
    t=fun(n);
    cout<<t<<" ";


    t=fun(5);
    cout<<endl;
    cout<<t;
    return 0;
}