#include <iostream>
#include <string>
using namespace std;

struct Score
{
    string name;
    int kor;
    int eng;
};

Score plus_(Score x, Score y)
{
    Score r;
    r.name = "Total";
    r.kor = x.kor + y.kor;
    r.eng = x.eng + y.eng;
    return r;
}