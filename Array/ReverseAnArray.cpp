#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
void reverse(int i, int arr[], int n){
    if(i>=n/2) return;
    swap(arr[i], arr[n-i-1]);
    reverse(i+1,arr,n);
}

int main(){
system("cls");
    int n = 5;
    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];
    reverse(0,arr,n);
    for(int i=0; i<n; i++) cout<<arr[i]<<" ";
    getch();
    return 0;
}




// #include <bits/stdc++.h>
// using namespace std;
// void rvereseArray(int arr[], int start, int end)
// {
// 	while (start < end)
// 	{
// 		int temp = arr[start];
// 		arr[start] = arr[end];
// 		arr[end] = temp;
// 		start++;
// 		end--;
// 	}
// }	
// void printArray(int arr[], int size)
// {
// for (int i = 0; i < size; i++)
// cout << arr[i] << " ";

// cout << endl;
// }
// int main()
// {
// 	int arr[] = {1, 2, 3, 4, 5, 6};
	
// 	int n = sizeof(arr) / sizeof(arr[0]);
// 	printArray(arr, n);
// 	rvereseArray(arr, 0, n-1);
	
// 	cout << "Reversed array is" << endl;
// 	printArray(arr, n);
// 	return 0;
// }
