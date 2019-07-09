#include "example.h"

void Example::say_hello(){
    cout<<"hello"<<endl;
}

void Example::add(int x, int y, int *result) {
    *result = x + y;
}

int Example::sub(int *x, int *y) {
    return *x-*y;
}

void Example::negateint(int *n) {
*n = -(*n);
}

int Example::strLen(char *s, int *len){
    *len = strlen(s) ;
    return 0;
}

int Example::sumArr(int arr[], int num){
    int i, sum=0;
    for(i = 0; i < num; i++){
        sum += arr[i];
    }
    return sum;
}

void Example::printPoint(Point p)
{
  printf("point x = %d, y = %d\n",p.x,p.y);
}

void Example::swap(Point& a, Point& b)
{
    Point tmp;
    tmp = a;
    a = b;
    b =tmp;
}

string Example:: getString()
{
  return "hello,world";
}

double Example:: average(vector<int> v)
{
  return accumulate(v.begin(),v.end(),0.0)/v.size();
}