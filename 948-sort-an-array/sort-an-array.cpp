class Solution {
public:
void merge(int arr[],int start,int end,int mid){
    int arr1size = mid - start + 1;
    int arr2size = end - mid;

    //creating two arrays {left and right}
    int *arr1 = new int[arr1size];
    int *arr2 = new int[arr2size];

    //Copying the element in left arr
    int mainInd = start;
    for(int i=0; i < arr1size; i++){
        arr1[i] = arr[mainInd];
        mainInd++;
    }
    //Copying the element in right arr
    mainInd = mid + 1;
    for(int i=0; i < arr2size;i++){
        arr2[i] = arr[mainInd];
        mainInd++;
    }
    //mergeTwo sorted Array
    int i =0; //arr1
    int j=0; //arr2
    mainInd = start;//arr2

    while(i < arr1size && j < arr2size){
        if(arr1[i] < arr2[j]){
            arr[mainInd] = arr1[i];
            i++;
            mainInd++;
        }
        else {
            arr[mainInd] = arr2[j];
            j++;
            mainInd++;
        }
    }
    while(i < arr1size){
        arr[mainInd] = arr1[i];
        i++;
        mainInd++;
    }
    while(j < arr2size){
        arr[mainInd] = arr2[j];
        j++;
        mainInd++;
    }
    //free krde left n right arr ko
    delete[] arr1;
    delete[] arr2;

}



void mergeSort(int arr[],int start,int end){
    //base case
    if(start >= end) return;

    //breaking the arr for the first time
    int mid = (start + end)/2;
    //left using recursion se break kr rhe
    mergeSort(arr,start,mid);
    //right using recursion
    mergeSort(arr,mid+1,end);

    //for merging
    merge(arr,start,end,mid);

}
    vector<int> sortArray(vector<int>& arr) {
        int start =0;
        int end = arr.size()-1;
        mergeSort(arr.data(),start,end);
        return arr;
    }
};