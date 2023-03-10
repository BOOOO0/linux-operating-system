# 대표적인 디렉토리

## /bin

- 모든 사용자가 실행할 수 있는 파일(명령어)이 위치한 디렉토리입니다.

## /sbin

- 관리자 권한으로 실행할 수 있는 파일이 위치한 디렉토리입니다.

## /usr

- 사용자가 설치한 파일, 라이브러리 등이 위치한 디렉토리입니다.

- `/usr/bin`, `/usr/sbin`엔 ***유저가 추가한*** 실행 가능한 파일이 권한에 따라 나뉘어서 위치해 있습니다.

## /etc

- 시스템의 설정에 대한 파일이 위치한 디렉토리입니다. 계정에 대한 패스워드 같은 민감한 정보가 있습니다.

- 그렇기 때문에 `/etc` 하위에 존재하는 파일들은 대부분 관리자 권한이 있어야 수정 등의 작업이 가능합니다.

## /lib

- 공유 라이브러리가 위치한 디렉토리입니다.

## /usr/lib

- 유저가 추가한 공유 라이브러리가 위치한 디렉토리입니다.

## /home

- 사용자의 계정 디렉토리 바로 위에 존재하는 홈 디렉토리입니다.

## /mnt

- 파일 시스템에 의해 디스크에 존재하는 파일이 디렉토리에 일시적으로 마운트될 경우에 `/mnt` 디렉토리에 마운트됩니다.

## /proc, /sys

- 실제 디스크에 존재하지 않는 OS가 만들어낸 가상의 파일들이 위치하는 디렉토리입니다.

- 리눅스 환경에서만 제공하는 운영체제에 대한 정보를 조회할 수 있는 채널이라고 볼 수 있습니다.

## /tmp

- 임시 파일들이 존재하는 임시 디렉토리입니다.

- 삭제가 되더라도 다른 프로그램의 동작에 영향을 주지 않는 파일들이 존재합니다.

## /dev

- 디바이스 드라이버가 사용하는 디바이스 파일이 위치한 디렉토리입니다.

- `/proc`, `/sys`처럼 실제로 디스크에 존재하는 파일이 아닌 OS에서 만들에낸 디바이스 파일이 위치합니다.