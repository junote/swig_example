#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <algorithm>
#include <functional>
#include <numeric>

using namespace std;

#define PI 3.14
const double const_PI=3.14;
enum WeekDay{Mon,Tue,Wed,Thu,Fri,Sat,Sun};

typedef struct Point
{
    int x, y;
} Point;



class Example{
    public:
    void say_hello();
    void add(int x, int y, int *result);
    int sub(int *x, int *y);
    void negateint(int *n);
    int strLen(char *s, int *len);
    int sumArr(int arr[], int num);

    void printPoint(Point p);
    void swap(Point& a, Point& b);

    string getString();

    double average(vector<int> v);

};

