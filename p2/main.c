#include <stdio.h>

int main() {
    int arr1[20], arr2[20], sum[20] = {};
    int n = 0;

    scanf("%d", &n);
    
    // 포인터 사용해서 배열 입력
    for(int *p = arr1; p < arr1 + n; p++) scanf("%d", p);
    for(int *p = arr2; p < arr2 + n; p++) scanf("%d", p);

    // arr1: p1, arr2: p2, sum: (q)
    int *p1 = arr1;
    int *p2 = arr2 + n - 1; // arr2의 마지막 요소부터 시작한다.
    int *q = sum;

    // 두 배열의 원소를 역방향으로 더하여 sum 배열에 저장
    for(int i = 0; i < n; i++) {
        *q = *p1 + *p2;
        p1++; // 순방향 이동
        p2--; // 역방향 이동
        q++;  // 다음 위치로 이동
    }

    // 포인터를 사용하여 sum 배열 출력
    for(int *p = sum; p < sum + n; p++) {
        printf(" %d", *p);
    }

    return 0;
}
