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

int Example::print_args(int argc, char *argv[]) {
  for (int i = 0; i < argc; i++)
    printf("argv[%d] = %s\n", i, argv[i]);
  return argc;
}

int Example::count(char c, char *s, int len) {
  for (int i = 0; i< len; i++){
    if (c == s[i])
      return i;
  }
  return -1;
}

int Example::doublePointer(Point **p)
{
  *p = (Point *)malloc(sizeof(Point));
  (*p)->x = 11;
  (*p)->y = 22;
  (*p)->z = 33;
  return 111;
}

int Example::printPointer(Point **p)
{
  printf("pointer: p.x = %d\t, p.y= %d\t p.z = %d\n", (*p)->x,(*p)->y,(*p)->z);

  return 0;
}