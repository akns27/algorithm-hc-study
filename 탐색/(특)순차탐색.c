#include <stdio.h>
int list[] = {9, 5, 8, 3, 7};
int key, result;

int search(int low, int high){
	for(int i=low; i<high; i++){
		//처음부터 끝까지 1씩 증가시켜가며 key값과 똑같은 list값이 있다면 그 값보다 +1된 값 반환, 
		//배열이 0부터 시작하기에 실제로 비교한 횟수는 i+1이 되야함
		if(list[i] == key) return i+1;
	}
	return -1; //아니면 -1반환
}

int main(){
	int n = sizeof(list)/sizeof(int);
	
	printf("탐색할 key 값 입력 : ");
	scanf("%d", &key);
	
	result = search(0, n);
	
	if(result == -1) printf("탐색 실패\n");
	else printf("탐색 성공, 비교 횟수 : %d\n", result);
	
	return 0;
}