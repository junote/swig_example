#include <iostream>
#include <string>
#include <cstring>
using namespace std;

typedef struct Point{
int x;
int y;
int z;
} Point;

class Example{
    public:
    void say_hello();
    void add(int x, int y, int *result);
    int sub(int *x, int *y);
    void negateint(int *n);
    int strLen(char *s, int *len);
    int sumArr(int arr[], int num);
    int print_args(int argc, char *argv[]);
    int count(char c, char *s, int len);
    int doublePointer(Point **p);
    int printPointer(Point **p);
};


