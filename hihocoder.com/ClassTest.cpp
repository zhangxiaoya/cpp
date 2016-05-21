//
// Created by Yanan Zhang on 5/21/16.
//

#include "ClassTest.h"
void ClassTest::info() {
    cout<<"Hi, This is my personal infomation:"<<endl
    <<"Name: "<<this->name<<endl
    <<"Age:  "<<this->age<<endl
    <<"High: "<<this->high<<endl;
}


void ClassTest::setAge(int _age) {
    this->age = _age;
}

void ClassTest::setName(string _name) {
    this->name = _name;
}

void ClassTest::setHigh(double _high) {
    this->high = _high;
}

int ClassTest::getAge() {
    return this->age;
}

string ClassTest::getName() {
    return this->name;
}

double ClassTest::getHigh() {
    return this->high;
}