#include <iostream>

#include "student/Student.h"

using namespace std;

void demo1(){
    // student 类的实例化及调用.
    char name[100] = "lucy";
    StudentMeta lucy(10, 25, name);

    lucy.setAge(25);
    cout << lucy.getAge() << endl;
    cout << lucy.getName() << endl;
    cout << lucy.getStudentNum() << endl;
}

void demo2(){
    // 动态创建类 student
    // new 和 delete 的使用.
    auto *xing = new StudentMeta;
    xing->setAge(26);
    cout << xing->getAge() << endl;
    delete xing;
};

void demo3(){
    char name[100] = "lucy";
    // OrdinaryStudent 继承至 StudentMeta
    OrdinaryStudent lucy(10, 25, name);
    // 调用拷贝构造函数.
    OrdinaryStudent jack = lucy;
    cout << jack.getAge() << endl;
};

void demo4(){
    // 对象数组
    OrdinaryStudent std[] = {OrdinaryStudent(1, 25, (char *)"jack"),
                             OrdinaryStudent(2, 26, (char *)"lucy"),
                             OrdinaryStudent(3, 27, (char *)"xing")};
    for (int i = 0; i < 3; i++){
        cout << std[i].getName() << endl;
    }
};

int main(){
    // 2019C++面向对象高级语言程序设计全套视频【千锋物联网】 - > 第 2 章已完, 开始第 3 章.
    demo4();
    return 0;
}
