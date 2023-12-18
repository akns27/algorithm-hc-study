#include <stdio.h>

// 두 값을 교환하는 매크로
#define SWAP(x, y, t) ((t) = (x), (x) = (y), (y) = (t))

// 전역 변수 선언
int n, cnt;

// 배열을 분할하는 함수
int partition(int list[], int left, int right) {
    int pivot, temp;
    int low, high;

    // 피벗을 가장 왼쪽 원소로 설정
    pivot = list[left];
    low = left;
    high = right + 1;

    // 배열을 분할
    do {
        // 피벗보다 작은 값을 찾을 때까지 low를 증가시킴
        do {
            low++;
        } while (list[low] < pivot);

        // 피벗보다 큰 값을 찾을 때까지 high를 감소시킴
        do {
            high--;
        } while (list[high] > pivot);

        // low가 high보다 작으면 요소를 교환
        if (low < high)
            SWAP(list[low], list[high], temp);
    } while (low < high);

    // 피벗을 올바른 위치로 이동시킴
    SWAP(list[high], list[left], temp);

    // 피벗 원소의 인덱스를 반환
    return high;
}

// 퀵정렬을 수행하는 재귀 함수
void quicksort(int list[], int left, int right) {
    // 배열의 크기가 1 이상이면 진행
    if (left < right) {
        // 배열을 분할하고 피벗의 인덱스를 얻음
        int q = partition(list, left, right);

        // 배열을 분할한 후의 현재 상태 출력
        for (int i = 0; i < n; i++) {
            printf("%d ", list[i]);
        }
        printf("\n");//줄바꿈

        // 피벗 이전과 이후의 하위 배열을 재귀적으로 정렬
        quicksort(list, left, q - 1);
        quicksort(list, q + 1, right);
    }
}

int main() {
    // 배열의 크기 입력
    scanf("%d", &n);

    // 배열 원소 입력
    int list[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &list[i]);
    }

    // 배열에 대해 퀵정렬 수행
    quicksort(list, 0, n - 1);

    return 0;
}
