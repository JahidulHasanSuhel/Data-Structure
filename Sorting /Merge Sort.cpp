// Code written by Suhel
#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
void merge(int *arr, int s, int e){
    int mid = (s+e)/2;
    int len1 = mid-s+1;
    int len2 = e-mid;
    int *first = new int[len1];
    int *second = new int[len2];

    int mainarrindex = s;
    for(int i = 0; i<len1; i++){
        first[i]=arr[mainarrindex];
        mainarrindex++;
    }
    mainarrindex = mid + 1;
        for(int i = 0; i<len2; i++){
        second[i]=arr[mainarrindex];
        mainarrindex++;
        }
    int index1 = 0;
    int index2 = 0;
    mainarrindex = s;
    while(index1<len1 && index2<len2){
        if(first[index1]<second[index2]){
            arr[mainarrindex]=first[index1];
            index1++;
        }
        else{
            arr[mainarrindex]=second[index2];
            index2++;
        }
        mainarrindex++;
    }
    while(index1<len1){
        arr[mainarrindex]=first[index1];
        mainarrindex++;
        index1++;
    }
    while(index2<len2){
        arr[mainarrindex]=second[index2];
        mainarrindex++;
        index2++;
    }
}
void mergesort(int *arr , int s, int e){
    if(s >= e){
        return;
    }
    int mid = (s+e)/2;
    mergesort(arr, s, mid);
    mergesort(arr, mid+1, e);
    merge(arr, s, e);
}
int main(){
system("cls");
    int arr[]={2,6,56,3,9,7,343,73,743,35,567,7554,36,345};
    int n = sizeof(arr)/sizeof(arr[0]);
    mergesort(arr, 0, n-1);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    getch();
    return 0;
}
