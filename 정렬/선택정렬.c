#include <stdio.h>
int main(){
	int list[] = {5, 3, 8, 1, 2, 7};
	int index, min, num;
	int n = sizeof(list) / sizeof(int);
	
	for(int i=0; i<n-1; i++){ 
		min = i;// 현재까지의 최솟값의 인덱스를 저장하는 변수 min을 초기화
		for(int j=i+1; j<n; j++){
			// 현재까지의 최솟값보다 작은 값을 찾으면 min을 업데이트
			if(list[j] < list[min]) 
				min = j;
		}
		// i번째 위치의 값과 최솟값(min) 위치의 값을 교환합니다.
		num = list[i];
		list[i] = list[min];
		list[min] = num;
	}
	for(int i=0; i<n; i++){
		printf("%d ", list[i]);
	}
	return 0; 
}