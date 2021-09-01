# include<bits/stdc++.h>

using namespace std;

// The formulae for number of call is (2^n) -1
// This uses GP series

void fun(int n){
    if(n>0){
        cout<<n<<" ";
        fun(n-1);
        fun(n-1);
    }
}


int main(){
    int n;
    cin>>n;
    fun(n);    // Time complexcity O(2^n)

    // Space occupies is height of the tree i.e-> number of activation record required.


    // Space complexcity is in the order of n+1

}

