#include <stdio.h>
#include <windows.h>  // 콘솔 코드 페이지 설정

int main() {
    // 콘솔 출력 인코딩을 UTF-8로 설정
    SetConsoleOutputCP(CP_UTF8);

    printf("안녕, 민우!\n");
    return 0;
}
