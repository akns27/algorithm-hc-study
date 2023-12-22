//절반 쪼개고 쪼개고 쪼개는 방법=

#include <stdio.h>
int list[] = {2, 6, 11, 13, 18, 20, 22, 27, 29, 30, 34, 38, 41, 42, 45, 47};
int key, result;

int binary_search(int low, int high){
	int middle;
	
	while(low<=high){
		middle = (low+high)/2;//중앙 값을 정해줌
		
		if(key == list[middle]) return middle + 1;//키와 중앙값이 같다면 중앙값+1 해줌(배열 인덱스 0부터 시작해서 우리가 원하는 값이 나오려면 +1)
		else if(key < list[middle]) high = middle - 1;//같지않고 중앙값보다 작다면 high를 재설정
		else low = middle + 1;//리스트보다 크다면 low를 재설정
	}
	
	return -1;//찾는 값이 없다면 -1반환
}

int main() {
    // 배열 크기 계산
    int n = sizeof(list) / sizeof(int);

    // 사용자로부터 key 값 입력 받기
    printf("탐색할 key 값 입력 : ");
    scanf("%d", &key);

    // binary_search 함수 호출하여 탐색 수행
    result = binary_search(0, n - 1);

    // 결과에 따라 적절한 메시지 출력
    if (result == -1)
        printf("탐색 실패\n"); // -1은 찾는 값이 없음을 나타냄
    else
        printf("탐색 성공, 비교 횟수 : %d\n", result);

    return 0;
}

