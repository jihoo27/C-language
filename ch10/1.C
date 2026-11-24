#include <stdio.h>
#include <ctype.h>

int main()
{
    char ch = 'M';  //이 예제에서 검사할 문자
    printf("문자: %c\n",ch);

    printf("알파벳 여부:%s\n", isalpha(ch)?"예":"아니요");  //isalpha검사

    printf("대문자 여부:%s\n", isupper(ch)?"예":"아니요");  //isupper검사

    printf("소문자 여부:%s\n", islower(ch)?"예":"아니요");  //islower검사
    
    printf("숫자 여부:%s\n", isdighit(ch)?"예":"아니요");  //isdighit검사
    
    printf("알파벳 또는 숫자 여부:%s\n", isalnum(ch)?"예":"아니요");  //isalnum검사
    
    printf("16진수 숫자 여부:%s\n", isxdighit(ch)?"예":"아니요");  //isxdighit검사
    
    printf("구두점 문자 여부:%s\n", ispunct(ch)?"예":"아니요");  //ispunct검사
    
    printf("인쇄 가능 문자 여부:%s\n", isprint(ch)?"예":"아니요");  //isprint검사

    printf("제어 문자 여부:%s\n", iscntrl(ch)?"예":"아니요");  //iscntrl검사
    
    printf("아스키 문자 여부:%s\n", isascii(ch)?"예":"아니요");  //isascii검사

    return 0;
}