#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
int linearSearch(int arr[], int size, int element){
    for(int i = 0; i<size; i++){
        if(arr[i] == element) return i;
    }
    return -1;
}
int main(){
system("cls");
    int arr[] = {1, 4, 5, 7, 9, 13, 14, 16};
    int size = sizeof(arr)/sizeof(int);
    int element = 9;
    int searchIndex = linearSearch(arr, size, element);
    cout<<"the element was found "<<element<<" " "and the index number is : "<<searchIndex <<endl;
    return 0;
}
