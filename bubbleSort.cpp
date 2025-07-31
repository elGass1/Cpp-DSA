#include <bits/stdc++.h>

using namespace std;

void swap(int *nb1, int *nb2){
	int aux=*nb1;
	*nb1=*nb2;
	*nb2=aux;
}


void bubbleSort(int arr[], int n){
	int i,j;
	for(i=0;i<n-1;i++){
		for(j=0; j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
				swap(&arr[j], &arr[j+1]);
			}
		}

	}
}

void printArray(int arr[], int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

int main(){
	int arr[]={13,98,18,12,22,69,17,7,9};
	int n=sizeof(arr)/sizeof(arr[0]);
	cout<<"array before bubble sort "<<endl;
	printArray(arr, n);
	bubbleSort(arr,n);
	cout<<"array after bubble sort "<<endl;
	printArray(arr, n);

	return 0;
}
