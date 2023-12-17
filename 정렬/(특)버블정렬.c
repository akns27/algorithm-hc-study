#include <stdio.h>
int main(){
	int list[] = {5, 3, 8, 1, 2, 7};
	int key, min, num;
	int n = sizeof(list) / sizeof(int);

	for(int i=n-1; i>0; i--){//오름차순으로 정렬하기 때문에 가장 큰 값은 한 번 정렬될 때마다 제일 우측에 있으므로 굳이 포함시켜서 정렬시킬 필요없으므로 i--해줌
		for(int j=0; j<i; j++){
			if(list[j] > list[j+1]){
				num = list[j+1];
				list[j+1] = list[j];
				list[j] = num;
			}
		}
	} 
	for(int i=0; i<n; i++){
		printf("%d ", list[i]);
	}
	return 0;
}