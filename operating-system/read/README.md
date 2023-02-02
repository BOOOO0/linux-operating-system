# read

- read 시스템 콜의 원형은 다음과 같습니다.
  ```C
  #include <unistd.h>
  
  ssize_t read(int fd, void *buf, ssize_t nbytes);
  ```

- 전달받은 파일 디스크립터에 해당하는 파일에서 사이즈 만큼의 크기의 데이터를 buffer에서 읽어옵니다.