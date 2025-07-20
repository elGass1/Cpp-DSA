#include <bits/stdc++.h>
using namespace std;


int maxAnd(int arr[], int N){
    int result=0,count=0, pattern=0,mask;
    for(int i=32;i>=0;i--){
        mask=1<<i;
        pattern=(result | mask);
        count=0;
        for(int j=0; j<N;j++){
            if((pattern& arr[j])==pattern){
                count++;
            }
        }
        if(count>=2){
            result|=mask;
        }
    } 
    return result;
}


int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int N;
        cin>>N;
        int arr[N];
        for(int i=0;i<N;i++){
            cin>>arr[i];
        }
        int res=maxAnd(arr, N);
        cout<<res<<endl;
    }
    return 0;
}