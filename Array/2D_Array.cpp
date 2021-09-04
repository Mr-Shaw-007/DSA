#include<bits/stdc++.h>

using namespace std;

int main(){
    

    int a[3][4];// Static 

    int *ar[3]; // created in stack
    ar[0]=new int[4];// Created in heap
    ar[1]=new int[4];// Every index cantains an array of size 4
    ar[1]=new int[4];


    int **arr;// double point thsi whole thing is created inside heap

    arr= new int *[3];  // integer pinter array type 
    arr[0]=new int[4];
    arr[1]=new int[4];
    arr[2]=new int[4];


    

}