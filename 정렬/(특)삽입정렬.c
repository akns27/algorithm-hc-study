#include <stdio.h>
int main(){
	int list[] = {5, 3, 8, 1, 2, 7};
	int key, min, num;
	int n = sizeof(list) / sizeof(int);
	
	for(int i=1; i<n; i++){
		key = list[i];//key값 설정
		for(int j=i-1; j>=0 && list[j]>key; j--){
			//두 번째 for 루프는 key를 이미 정렬된 부분에 삽입하는 역할을 합니다. j는 현재 i의 바로 이전 위치를 가리키며, list[j]가 key보다 큰 동안 list[j]를 오른쪽으로 한 칸씩 이동시킵니다.
			list[j+1] = list[j];
			//list[j+1] = key;는 key를 적절한 위치에 삽입하는 역할을 합니다. 두 번째 for 루프에서 j가 key보다 작은 값을 갖는 위치를 찾은 후, 그 다음 위치(j+1)에 key를 삽입합니다.
		}
		list[j+1] = key;
	}
	for(int i=0; i<n; i++){
		printf("%d ", list[i]);
	}
	return 0;
}
