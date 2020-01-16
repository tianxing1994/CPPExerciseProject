//
// Created by Administrator on 2020/1/6 0006.
//

#ifndef BASETESTPROJECT_STUDENT_H
#define BASETESTPROJECT_STUDENT_H

class StudentMeta {
    // student Meta 类, 定义学生基本信息.

protected:
    static int studentNum;

protected:
    long int id;
    char *name;
    int age;

public:
    StudentMeta();
    StudentMeta(int id, int age, char *name);
    ~StudentMeta();

    /* 拷贝构造函数, 当我们用一个已有的类实例去初始化另一个对象时, 如 StudentMeta jack = lucy (其中: lucy 是一个已有的 StudentMeta 对象. )
     * 此时, jack 是一个新的 student 对象, 且其类成员值与 lucy 一样. 但是这里面会有一个问题是, 当 lucy 的某个成员是一个指针时,
     * 则 jack 的这个成员和 lucy 的这个成员是指向同一块内存的, 这样的内存在析构函数中可能会被释放两次. 为了解决这个问题,
     * 就有了拷贝构造函数. 且如果 StudentMeta jack; jack = lucy; 此时是先构造了 jack, 再用 lucy 给 jack 初始化.
     * 同时应知道, 每个类都有一个默认的拷贝构造函数. 当使用等号 = 构造对象时, 调用的是这个函数, 而不会调用构造函数.
     */
    StudentMeta(const StudentMeta &ob);

    int getStudentNum() const;
    int setAge(int a);
    int getAge() const;
    // const 修饰符使得这个函数不能修改类内成员. 但是当类成员前用 mutable 修饰时, 其仍然是可以修改的.
    const char *getName() const;
};

class OrdinaryStudent:public StudentMeta {
    /* 普通学生, public 继承 StudentMeta.
     *
     * 子类实例化时, 会默认调用父类的无参构造函数.
     * 父类没有声明构造函数时, 调用默认构造函数, 再调用子类构造函数.
     * 父类有无参构造函数时, 调用父类无参构造函数, 再调用子类构造函数.
     * 父类只有有参构造函数时, 必须要显示调用父类构造函数, 否则报错.
     * 详细: 百度一下.
     *
     * 普通学生, 能够进行加减乘除的基本运算.
     */

public:
    // 每一个类都应该有一个 public 的构造函数.
    OrdinaryStudent(int id, int age, char *name);

    double add(double a, double b);
    double subtract(double a, double b);
    double multiply(double a, double b);
    double division(double a, double b);
};

class StraightStudent {

};

#endif //BASETESTPROJECT_STUDENT_H
