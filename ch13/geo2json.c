#include <stdio.h>

int main()
{
    float latitude;
    float longitude;
    char info[80];
    int started = 0;

    puts("[");

    while (scanf("%f, %f, %79[^\r\n]", &latitude, &longitude, info) == 3) {
        if (started)
            printf(",\n");
        else
            started = 1;

        printf("{\"latitude\": %f, \"longitude\": %f, \"info\": \"%s\"}",
               latitude, longitude, info);
    }
    puts("\n]");
    return 0;
}

// 리눅스(우분투)에서 실행
// csv 파일을 컴파일한 파일과 같은 위치에 두기 (깃허브에서 raw 데이터 열어서 복붙)
//
// gcc -o geo2json geo2json.c                    컴파일
// ./geo2json < gpsdata.csv > output.json        json 파일로 출력
// python3 -m http.server 8000                   웹 서버 실행 후 브라우저에서
//                                               http://localhost:8000/map.html 접속
