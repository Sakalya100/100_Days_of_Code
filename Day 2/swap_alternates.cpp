/*
*/
#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void swapAlternate(int arr[], int n){

    for(int i=0; i<n; i+=2){
        if(i+1<n){
            swap(arr[i],arr[i+1]);
        }
    }
}

int main(){
    int evens[8] = {5,2,9,4,7,6,1,0};
    int odds[5] = {11,33,9,76,43};

    swapAlternate(evens, 8);
    printArray(evens, 8);

    swapAlternate(odds, 8);
    printArray(odds, 8);


return 0;
}