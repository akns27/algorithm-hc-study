
// 자연수 N이 주어지면 자연수 N의 진약수의 합을 수식과 함께 출력하는 프로그램을 작성하세요. (진약수란, 약수 중에서 자기 자신을 제외한 숫자를 의미한다)

#include <stdio.h>
int main() {
	int N, i, sum=1;
	scanf("%d", &N);
	printf("1");
	for(i=2; i < N; i++)
		//for(i=2; i <= N/2; i++) 어떻게 출력하든 N을 2로 나눈 값이 최대 값임
	{
		if(N%i==0)
		{
			printf(" + %d", i);
			sum += i;
		}
	}
	printf(" = %d", sum);
	return 0;
}
