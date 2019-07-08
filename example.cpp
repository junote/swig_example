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

void Example::bar(double a[2], double b[4])
{
  for(int i = 0; i < 2;i++)
  {
    printf("%f\t",a[i]);
  }
  printf("\n");
  for(int i = 0; i < 4;i++)
  {
    printf("%f\t",b[i]);
  }
  printf("\n");
}