//
// Created by 陈景灝 on 2018/3/7.
//

#ifndef ARITHMETICTEST_SELECTIONSORT_H
#define ARITHMETICTEST_SELECTIONSORT_H

#include <iostream>
#include <algorithm>

using namespace std;


template<typename T>
void selectionSort(T arr[], int n){

    for(int i = 0 ; i < n ; i ++){

        int minIndex = i;
        for( int j = i + 1 ; j < n ; j ++ )
            if( arr[j] < arr[minIndex] )
                minIndex = j;

        swap( arr[i] , arr[minIndex] );
    }
}


#endif //ARITHMETICTEST_SELECTIONSORT_H
