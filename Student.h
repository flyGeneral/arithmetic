//
// Created by 陈景灝 on 2018/3/7.
//

#ifndef ARITHMETICTEST_STUDENT_H
#define ARITHMETICTEST_STUDENT_H

#include <iostream>
#include <string>

using namespace std;


struct Student{

    string name;
    int score;

    bool operator<(const Student& otherStudent){
        return score != otherStudent.score ?
               score > otherStudent.score : name < otherStudent.name;
    }

    friend ostream& operator<<(ostream &os, const Student &student){

        os<<"Student: "<<student.name<<" "<<student.score<<endl;
        return os;
    }
};

#endif //ARITHMETICTEST_STUDENT_H
