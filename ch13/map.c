#include <stdio.h>

int main()
{
    float latitude;
    float longtitude;
    char info[80];
    int started = 0;

    puts("[");

    while(scanf("%f, %f, %79[^\r\n]", &latitude, &longtitude, info) == 3) {
        if(started)
            printf(",\n");
        else
            started = 1;

        printf("{\"latitude\": %f, \"longtitude\": %f, \"info\": \"%s\"}",
            latitude, longtitude, info);
    }
    puts("\n]");
    return 0;
}
//리눅스에서 실행해야됨
//csv파일을 우리가 컴파일한 파일과 같은 레벨에 두기(같은 위치에 두기)
// 우분투 --> 깃허브에서 raw데이터 열어서 복붙

//gcc -o geo2json geo2json.c    컴파일
//json파일로 출력하는 방법
// ./geo2json < gpsdata.csv > output.json
//지도 만드는건 ai활용
//python -m http.server 8000     -->   파이썬에서 html파일 실행하는 코드 터미널창에 입력
//별도의 api키 필요없이 만들 수 있도록 해줘 