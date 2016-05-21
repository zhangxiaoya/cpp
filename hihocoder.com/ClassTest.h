//
// Created by Yanan Zhang on 5/21/16.
//

#ifndef HIHOCODER_COM_CLASSTEST_H
#define HIHOCODER_COM_CLASSTEST_H

#include <string>
#include <iostream>

using std::cout;
using std::endl;
using std::string;

class ClassTest {
private:
    int age;
    string name;
    double high;
public:
    ClassTest():age(0),name(""),high(0.0){ }
//    ClassTest(int _age,string _name,double _high):age(_age),name(_name),high(_high){ }
    ClassTest(int _age =0,string _name = "jerry",double _high = 0.0):age(_age),name(_name),high(_high){ }

    void info();
    void setAge(int _age);
    void setName(string _name);
    void setHigh(double _high);

    int getAge();
    string getName();
    double getHigh();
};


#endif //HIHOCODER_COM_CLASSTEST_H
