
// N개의 자연수가 입력되면 각 자연수를 뒤집은 후 그 뒤집은 수가 소수이면 그 수를 출력하는 
// 프로그램을 작성하세요. 예를 들어 32를 뒤집으면 23이고, 23은 소수이다. 그러면 23을 출력
// 한다. 단 910를 뒤집으면 19로 숫자화 해야 한다. 첫 자리부터의 연속된 0은 무시한다.
// 뒤집는 함수인 int reverse(int x) 와 소수인지를 확인하는 함수 bool isPrime(int x)를 반드시 작성하여 프로그래밍 한다.

#include <stdio.h>
#include <stdbool.h>
int reverse(int x)
{
  int temp = 0;
  while (x)
  {
    temp = temp * 10 + x % 10;
    x = x / 10;
  }
  return temp;
}
bool isPrime(int x)
{
  int i;
  if (x == 1)
    return false;
  for (i = 2; i < x; i++)
  {
    if (x % i == 0)
      return false;
  }
  return true;
}
int main()
{
  {
    int n, data, i, result;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
      scanf("%d", &data);
          result = reverse(data);
      result = remove(data);
      if (isPrime(result)) printf("%d", result);
    }
    return 0;
  }
}