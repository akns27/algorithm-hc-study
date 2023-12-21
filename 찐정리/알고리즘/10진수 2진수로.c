//10진수 n을 입력받으면 2진수로 변환하여 출력하는 프로그램을 작성
//함수 f를 작성하여 제출(반드시 재귀함수 사용)

#include<stdio.h>
void f(int n)
{
  if(n<2){
    printf("%d", n);
  }
  else{
    f(n/2);
    printf("%d", n%2);
  }
}
int main(){
  int n;
  scanf("%d", &n);
  f(n);
  return 0;
}