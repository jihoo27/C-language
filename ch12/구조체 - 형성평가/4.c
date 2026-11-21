#include <iostream>
using namespace std;

struct Body
{
    int height;
    double weight;
};

Body makeStudent(Body father, Body mother)
{
    Body student;
    student.height = (father.height + mother.height) / 2 + 5;
    double w = (father.weight + mother.weight) / 2.0 - 4.5;
    student.weight = (int)(w * 10 + 0.5) / 10.0;  // 소수 첫째 자리 반올림
    return student;
}