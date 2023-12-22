/* 나의 풀이
#include <stdio.h>

int main() {
    int i, a, max = 0, least = 1000;
    scanf("%d", &a);
    int num[a];

    for (i = 0; i < a; i++) {
        scanf("%d", &num[i]);
        if (num[i] > max)
            max = num[i];
        if (num[i] < least)
            least = num[i];
    }

    printf("%d\n", (max - least));
    return 0;
}
*/

// N(2<=N<=100)명의 나이가 입력됩니다. 이 N명의 사람 중 가장 나이차이가 많이 나는 경우는 
// 몇 살일까요? 최대 나이 차이를 출력하는 프로그램을 작성하세요.

//쌤의 풀이
#include<stdio.h>
int main(){
	int i, n, age, max = -1, min = 1000;
	scanf("%d", &n);
	
	for(i=1; i<=n; i++){
		scanf("%d", &age);
		
		if (age > max){
			max = age;
		}
		
		if (age < min){
			min = age;
		}
		
	}
	printf("%d\n", (max - min));
  return 0;
}