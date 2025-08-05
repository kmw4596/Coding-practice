//C언어의 기초 문법
/* 
#include <stdio.h>

int main(){

    return 0;
}


//1. 변수 선언하고 출력하기

#include <stdio.h>

int main(){
    int age = 23;
    float height = 178.5;
    char grade = 'A';

    printf("나이: %d\n",age);
    printf("키: %f\n",height);
    printf("등급: %c\n",grade);

    return 0;

}


//2. 입력

#include <stdio.h>

int main(){
    int num;
    
    printf("정수를 입력하시오: ");
    scanf("%d",&num);
    printf("입력한 숫자: %d",num);

    return 0;

}


//세 수 입력 받아서 최댓값 출력하기

#include <stdio.h>

int main(){
    int a;
    int b;
    int c;
    printf("세 수를 입력하시오: ");
    scanf("%d %d %d",&a,&b,&c);

    if(a>b){
        if(a>c){
            printf("A = %d가 가장 큽니다",a);
        }
        else{
            printf("C = %d가 가장 큽니다",c);
        }
    }
    else{
        if(b>c){
            printf("B = %d가 가장 큽니다",b);
        }
        else{
            printf("C = %d가 가장 큽니다",c);
        }
    }
    return 0;

}


#include <stdio.h>

int main(){
    int a,b,c;
    printf("세 숫자를 입력하시오:");
    scanf("%d %d %d",&a,&b,&c);

    int max = a;
    if (b>max) max = b;
    if (c>max) max = c;

    printf("가장 큰 숫자는 %d 입니다",max);

    return 0;

}
*/
