//
// Created by Administrator on 2020/1/15 0015.
//

#ifndef BASETESTPROJECT_COURSE_H
#define BASETESTPROJECT_COURSE_H


enum course {
    language = 0,
    math = 1,
    english = 2,
    physical = 3,
    chemistry = 4,
    biological = 5,
};

class Language {
public:
    int const max_score = 150;
    int const passing_score = 90;
};

class Math {
public:
    int const max_score = 150;
    int const passing_score = 90;
};

class English {
public:
    int const max_score = 150;
    int const passing_score = 90;
};

class Physical {
public:
    int const max_score = 120;
    int const passing_score = 72;
};

class Chemistry {
public:
    int const max_score = 108;
    int const passing_score = 65;
};

class Biological {
public:
    int const max_score = 72;
    int const passing_score = 43;
};

#endif //BASETESTPROJECT_COURSE_H
