//
// Created by Administrator on 2020/1/6 0006.
//
#include <iostream>
#include <string.h>
#include "Student.h"

using namespace std;

int StudentMeta::studentNum = 0;

int StudentMeta::getStudentNum() const{
    return StudentMeta::studentNum;
};

StudentMeta::StudentMeta(){
    // 实例计数.
    ++studentNum;
    ;
};

StudentMeta::StudentMeta(int id, int age, char *name){
    // 实例计数.
    ++StudentMeta::studentNum;
    this->id = id;
    this->age = age;
    this->name = new char [strlen(name) + 1];
    strcpy(this->name, name);
};

StudentMeta::~StudentMeta(){
    // 析构函数, 不能传参, 不能重载. 系统默认会有一个析构函数, 内容为空.
    --StudentMeta::studentNum;
    cout << "destruct: " << this->name << endl;
    cout << "current student num: " << StudentMeta::studentNum << endl;
};

StudentMeta::StudentMeta(const StudentMeta &ob) {
    // 拷贝构造函数, 当使用如 StudentMeta jack = lucy; 时, 此函数发挥作用.
    ++StudentMeta::studentNum;
    id = ob.id;
    name = new char[strlen(ob.name) + 1];
    strcpy(name, ob.name);
    age = ob.age + 1;
};

int StudentMeta::setAge(int a){
    this->age = a;
    return this->age;
};

int StudentMeta::getAge() const {
    return this->age;
};

char const *StudentMeta::getName() const
{
    // 因为 const 修饰使得此函数不能修改类内成员的值.
    // 如处为了返回 name, 需要返回其字符数组的指针. 而当指针被暴露时, 则其值可能被修改,
    // 所以在此处, this->name 的类型已变为 char const[100].
    // 所以返回值类型应为 char const.
    return this->name;
};


// OrdinaryStudent 定义

OrdinaryStudent::OrdinaryStudent(int id, int age, char *name){
    this->id = id;
    this->age = age;
    this->name = new char [strlen(name) + 1];
    strcpy(this->name, name);
};

double OrdinaryStudent::add(double a, double b) {
    double ret;
    ret = a + b;
    return ret;
};

double OrdinaryStudent::subtract(double a, double b) {
    double ret;
    ret = a - b;
    return ret;
};

double OrdinaryStudent::multiply(double a, double b) {
    double ret;
    ret = a * b;
    return ret;
};

double OrdinaryStudent::division(double a, double b) {
    double ret;
    ret = a / b;
    return ret;
};
