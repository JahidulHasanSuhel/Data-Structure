#include<bits/stdc++.h>
#include<iostream>
#include<conio.h>
using namespace std;
struct Pair
{
    int min;
    int max;
};

Pair getminmax(int arr[], int n){
    struct Pair MM;
    if(n==1){
        MM.max = arr[0];
        MM.min = arr[0];
        return MM;
    }
    if(arr[0]> arr[1]){
        MM.max = arr[0];
        MM.min = arr[1];
    }
    else{
        MM.max = arr[1];
        MM.min = arr[0];
    }
    for(int i = 2; i<n; i++){
        if(arr[i]>MM.max){
            MM.max = arr[i];
        }
        else if(arr[i]<MM.min){
            MM.min = arr[i];
        }
    }
    return MM;
}
int main(){
system("cls");
    int arr[]={1,4,6,7,99,354,634,6455};
    int size = sizeof(arr)/sizeof(arr[0]);
    struct Pair MM = getminmax(arr, size);
    cout<<"minimum "<<MM.min<<endl;
    cout<<"maximum "<<MM.max<<endl;
    getch();
    return 0;
}
