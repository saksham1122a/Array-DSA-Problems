void reverseArray(vector<int> & arr, int m){
    int s = m+1;
    int e = arr.size()-1;

    while(s<=m){
        swap(arr[s], arr[e]);
        s++;
        e--;
    }
}