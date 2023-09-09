#include<bits/stdc++.h>
using namespace std;
//decalre the function at top
int search(int arr[], int N, int X);

int main(){
    int arr[]={1,5,8,6,8};
    int len = sizeof(arr)/sizeof(arr[0]);
    cout<<"At index "<<search(arr,len,6);
    return 0;
}
//program to search element in an array
int search(int arr[], int N, int X){

    for(int i =0; i<N; i++){

        if(arr[i] == X) return i;

    }

    return -1;
}