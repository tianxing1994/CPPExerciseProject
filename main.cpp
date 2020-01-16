#include <iostream>

#include "student/Student.h"

using namespace std;

void demo1(){
    // student ���ʵ����������.
    char name[100] = "lucy";
    StudentMeta lucy(10, 25, name);

    lucy.setAge(25);
    cout << lucy.getAge() << endl;
    cout << lucy.getName() << endl;
    cout << lucy.getStudentNum() << endl;
}

void demo2(){
    // ��̬������ student
    // new �� delete ��ʹ��.
    auto *xing = new StudentMeta;
    xing->setAge(26);
    cout << xing->getAge() << endl;
    delete xing;
};

void demo3(){
    char name[100] = "lucy";
    // OrdinaryStudent �̳��� StudentMeta
    OrdinaryStudent lucy(10, 25, name);
    // ���ÿ������캯��.
    OrdinaryStudent jack = lucy;
    cout << jack.getAge() << endl;
};

void demo4(){
    // ��������
    OrdinaryStudent std[] = {OrdinaryStudent(1, 25, (char *)"jack"),
                             OrdinaryStudent(2, 26, (char *)"lucy"),
                             OrdinaryStudent(3, 27, (char *)"xing")};
    for (int i = 0; i < 3; i++){
        cout << std[i].getName() << endl;
    }
};

int main(){
    // 2019C++�������߼����Գ������ȫ����Ƶ��ǧ���������� - > �� 2 ������, ��ʼ�� 3 ��.
    demo4();
    return 0;
}
