#include<bits/stdc++.h>

using namespace std;

// Since there are 3 disc it is making 15 calls-> (2^n)-1
void tow(int n, int a, int b, int c){
    if(n>0){
        tow(n-1,a,c,b);
        cout<<a<<","<<c<<endl;
        tow(n-1,b,a,c);
    }

}

int main(){
    cout<<"The Steps required are ";
    tow(3,1,2,3);
    return 0;
}
