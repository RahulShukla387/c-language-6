// #include<stdio.h>
//     int sum(int, int); // function prototype
//     int sum(int x , int y){
//          printf("the sum is %d\n",x+y);
//         return x +y;

//     }
// int main(){
//     sum(3,6); // it will print by  primary i.e by main fn
//    printf("the sum is %d\n",sum(1,5)); // by both primary and sec.
//   int a = 5, b=8;
//    printf("the sum is %d\n",sum(a,b)); // by both primary and sec.
// }

// call by reference
// now we will try to change the value of a and b by changing in x and y;
// doubt have to clear time 6.15 hrs code with harry
#include<stdio.h>
    int sum(int); // function prototype
    int sum(int x ){
        int x = 4;
    }
int main(){
  int a = 5;
  printf("the value of a is %d ",&a);
  return 0;
}