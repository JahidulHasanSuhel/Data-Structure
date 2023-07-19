#include<bits/stdc++.h>
#include<conio.h> 
using namespace std;
int binarySearch(int arr[], int size,int key){
    int start=0;
    int end=size-1;
    // int mid=(start+end)/2;
    int mid=start+(end-start)/2; //for better optimaization and this will not giving integer overflow;
    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        if(key>=arr[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return -1;
}

int main(){
system("cls");
    int even[8]={1,3,4,5,6,7,9,13};
    int indexeven=binarySearch(even,8,9);
    cout<<"the element that you search that is at index " <<indexeven<<endl;
    getch();
    return 0;
}
