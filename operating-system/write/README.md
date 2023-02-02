# write

- write 함수의 원형은 다음과 같습니다.
  ```C
  #include <unistd.h>
  
  ssize_t write(int fd, const void* buf, size_t n);
  ```

- 전달받은 size만큼 인자로 전달받은 파일 디스크립터 번호에 해당하는 파일에 전달받은 buffer에 담긴 데이터를 write합니다.

- 파일 디스크립터 번호가 표준 입력~에러일 경우 해당 프로세스의 표준 입력~에러를 지정할 수 있습니다.

