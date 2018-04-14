//
// Created by 陈景灝 on 2018/4/11.
//

#ifndef ARITHMETICTEST_MAXHEAP_H
#define ARITHMETICTEST_MAXHEAP_H

template<typename T>
class MaxHeap {
private:
    T* data;
    int count;

public:
    MaxHeap(int capacity){
        // 存储进数组的时候，元素是从1开始算的
        data = new T[capacity + 1];
        count = 0;
    }

    ~MaxHeap(){
        delete[] data;
        count = 0;
    }

    int size(){
        return count;
    }

    bool isEmpty(){
        return count == 0;
    }
};


#endif //ARITHMETICTEST_MAXHEAP_H
