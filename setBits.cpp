#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int setBits(int N){
    int s=0;
    while(N){
        if(N%2==1){
            s+=1;
        }
        N=N>>1;
    }
    return s;

}

int main(){
    int n, setbits=0;
    cout<<"enter an integer N ";
    cin>>n;
    setbits=setBits(n);
    cout<<"number of set bits is "<<setbits;
    return 0;

}