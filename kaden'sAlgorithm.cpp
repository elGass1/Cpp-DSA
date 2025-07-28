#include <iostream>
#include <climits>

using namespace std;

int maxSumArray(int arr[], int size){

    int curr_max=INT_MIN,max_here=0;

    for(int i=0;i<size; i++){
        max_here+=arr[i];
        if(curr_max<max_here){
            curr_max=max_here;
        }
        if(max_here<0){
            max_here=0;
        }
    }
    return curr_max;
}


int main(){
    int n;
    cout<<"enter the array length: ";
    cin>>n;
    int arr[n];
    cout<<"enter array elements: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int max_sum=maxSumArray(arr, n);
    cout<<"maximum contiguous sum is "<<max_sum;

    return 0;

}