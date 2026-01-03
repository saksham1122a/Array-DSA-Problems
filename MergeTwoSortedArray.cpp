#include<iostream>
#include<vector>
using namespace std;

void merge(int arr1[], int n, int arr2[], int m, int arr3[]){
    int i = 0; // Pointer for arr1
    int j = 0; // Pointer for arr2
    int k = 0; // Pointer for arr3
    while(i<n && j<m){
        if(arr1[i]<arr2[j]){
            arr3[k] = arr1[i];
            k++; // Move pointer of arr3
            i++; // Move pointer of arr1
        }
        else{
            arr3[k] = arr2[j];
            k++; // Move pointer of arr3
            j++; // Move pointer of arr2
        }

    }
    while(i<n){
        arr3[k]= arr1[i]; // Copy remaining elements of arr1
        k++;
        i++;
    }
    while(j<m){
        arr3[k]= arr2[j]; // Copy remaining elements of arr2
        k++;
        j++;
    }

}
void print(int ans[], int n){
    for(int i =0; i<n; i++){
        cout<<ans[i]<<" ";
    }
}
int main(){
    int arr1[5] = {1,3,5,7,9};
    int arr2[3] = {2,4,6};
    int arr3[8] = {0};

    merge(arr1, 5, arr2, 3, arr3);
    cout<<"Merged Array:"<<endl;
    print(arr3, 8);
    return 0;
}