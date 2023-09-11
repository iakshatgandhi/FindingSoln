#include<iostream>
using namespace std;

int partition(int arr[], int s, int e){
    int pivot = arr[s];
    int cnt = 0;
    for(int i=s+1;i<=e;i++){
        if(arr[i]<=pivot){
            cnt++;
        }
    }
    //correct pivot index
    int pivotIndex = s+cnt;
    swap(arr[pivotIndex],arr[s]);

    //swapping the smaller on the left and greater on the right
    int i = s, j = e;
    while(i<pivotIndex && j>pivotIndex){
        while(arr[i]<pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }
        if(i<pivotIndex && j>pivotIndex){
            swap(arr[i++],arr[j--]);
        }
    }
    return pivotIndex; 
}

void quickSort(int arr[], int s, int e){
    if(s>=e)
        return;

    //partition
    int p = partition(arr,s,e);

    //left part sort
    quickSort(arr,s,p-1);
    //right part sort
    quickSort(arr,p+1,e);

}

int main(){
    int arr[50];
    int n;
    cin>> n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    quickSort(arr, 0, n-1);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    return 0;
}