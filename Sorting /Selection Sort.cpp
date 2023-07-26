/*
selection sort implementation
Code written by suhel.
*/
#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
void printArray(int array[], int n) {
  for (int i = 0; i < n; i++) {
    cout << array[i] << " ";
  }
  cout << endl;
}
void selectionSort(int arr[],int n){
    for(int i=0; i<n-1;i++){
        int minindex=i;
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[minindex]){
                minindex=j;
            }
        }
        swap(arr[minindex], arr[i]);
    }
} 
int main(){
system("cls");
    int arr[]={28,23,24,56,74,64,7,75,78,87};
    int n = sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr, n);
    cout<<"Sorted array in acsending order: ";
    printArray(arr,n);
    getch();
    return 0;
}
