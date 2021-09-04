#include<bits/stdc++.h>
using namespace std;

int main(){

    int a[5]={1,2,3,4,5};// Static
    int *p;
    p=new int[5];// Dynamic
    p[0]=6;
    p[1]=7;
    p[2]=8;
    p[3]=9;
    p[4]=10;

    for(int i=0;i<5;i++) cout<<a[i]<<" ";
    cout<<endl;
    for(int i=0;i<5;i++){
        cout<<p[i]<<" ";
    }

    int *q= new int [10];// Increasing The size alternating 

    // Actually P is nothing but a refference 
    for(int i=0;i<5;i++) q[i]=p[i];

    delete[]p;// Since we don't need it delete it

    p=q;// Now the both p & Q are pointing to same array
    q=NULL;// Freeing The q 

    



}
