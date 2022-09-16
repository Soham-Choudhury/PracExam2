#include <iostream>
//head recursive
int numDup(int arr[], int start, int size, int element){
    int value=arr[start]; //taking first value in array
    if (start>=size-1){ //base case, if it reaches the last value in array
        return 1;
    }
    if (value==element){ //if value in first of array matched element
        start=start+1;
        return 1+numDup(arr,start,size,element);
    }
};

int main (){

  int arr[5]={1,2,1,4,5};
  int start=0
  int size=arr.size();
  int element=1;
  int dup=numDup(arr, start, size, element);


};