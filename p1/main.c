#include <stdio.h>

int main() {
    char arr[10];
    int max_freq = 0;
    char max_char;

    // 포인터 사용해서 10개의 영문자 입력
    for (char *p = arr; p < arr + 10; p++) scanf(" %c", p); 

    // 포인터를 이용한 이중 반복문으로 빈도수 계산
    for (char *p = arr; p < arr + 10; p++) {
        int count = 0;
        // p가 가리키는 문자를 기준으로, q를 이용해 배열 전체와 비교
        for (char *q = arr; q < arr + 10; q++) {
            if (*p == *q) {
                count++;
            }
        }
        // 최대 빈도수 갱신
        // count > max_freq 이므로 빈도수가 같을 경우 기존 값(먼저 나온 문자)이 유지됨 (count >= max_freq 하면 맨 뒤에 나온 문자로)
        if (count > max_freq) {
            max_freq = count;
            max_char = *p;
        }
    }

    printf("%c %d\n", max_char, max_freq);

    return 0;
}
