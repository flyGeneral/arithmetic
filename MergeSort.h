//
// Created by 陈景灝 on 2018/3/7.
//

#ifndef ARITHMETICTEST_MERGESORT_H
#define ARITHMETICTEST_MERGESORT_H
#include <iostream>
#include <algorithm>
#include "InsertionSort.h"

using namespace std;

template<typename  T>

void _merge(T arr[], int leftIndex, int mid, int rightIndex) {
    T temp[rightIndex - leftIndex + 1];
    for (int i = leftIndex; i <= rightIndex; ++i) {
        temp[i - leftIndex] = arr[i];
    }
    int i = leftIndex;
    int j = mid + 1;
    for (int k = leftIndex; k <= rightIndex ; ++k) {
        if (i > mid){
            arr[k] = temp[j - leftIndex];
            j++;
        } else if(j > rightIndex){
            arr[k] = temp[i - leftIndex];
            i++;
        } else if (temp[i - leftIndex] < temp[j - leftIndex]){
            arr[k]= temp[i - leftIndex];
            i++;
        } else{
            arr[k] = temp[j - leftIndex];
            j++;
        }
    }

}

template<typename T>
void _mergeSort(T arr[], int leftIndex, int rightIndex) {
    if (leftIndex >= rightIndex){
        return;
    }
    int mid = (leftIndex + rightIndex)/2;
    _mergeSort(arr, leftIndex, mid);
    _mergeSort(arr, mid + 1, rightIndex);
    _merge(arr, leftIndex, mid, rightIndex);
}

template<typename T>
void mergeSort(T arr[], int n){

    _mergeSort( arr, 0, n-1);
}
#endif //ARITHMETICTEST_MERGESORT_H
