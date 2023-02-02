# close

- close 시스템 콜의 원형은 다음과 같습니다.
  ```C
  #include<unistd.h>

  int close(int fd);
  ```

- 파일 디스크립터 번호를 인자로 전달받아 open 되어 있는 해당 파일을 닫습니다. 

- 성공하면 1을 실패하면 0을 반환합니다.