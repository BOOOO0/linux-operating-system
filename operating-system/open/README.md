# open

- 시스템 콜 open의 원형은 다음과 같습니다.
  ```C
  #include <fcntl.h>
  #include <sys/stat.h>
  #include <sys/types.h>
  
  int open(const char *pathname, int flags, [mode_t mode]);
  ```

- pathname을 가지고 flags에 명시된 방식으로 mode에 명시된 권한을 가진 파일을 open하며 파일이 존재하지 않는다면 생성합니다.

- 성공한다면 파일 디스크립터의 값을 반환하고 실패하면 -1을 반환합니다.

- flags에 명시할 수 있는 open 방식은 다음과 같습니다.
  |키워드|방식|
  |:-:|:-:|
  |O_RDONLY|읽기 전용|
  |O_WRONLY|쓰기 전용|
  |O_RDWR|읽고 쓰기 허용|
  |O_APPEND|파일의 기존 내용에 추가 작성|
  |O_CREAT|파일이 존재하지 않으면 파일 생성|