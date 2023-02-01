# IPC System

- 실제로 사용하는 IPC 시스템의 예시로 공유 메모리 방식은 POSIX(Portable Operating System Interface for UniX) 공유 메모리를 사용하고 메세지 패싱 방식은 Unix-like 운영체제에서 많이 사용하는 파이프를 사용합니다.

## POSIX Shared Memory

- POSIX 공유 메모리 방식은 memory-mapped file을 사용합니다.

## POSIX 생산자 프로세스의 구현

- 공유 메모리 객체(memory-mapped file)를 생성(`shm_open()`)하고 할당된 파일 디스크립터를 변수에 저장합니다.

- 공유 메모리의 크기를 지정(`ftruncate()`)합니다.

- 공유 메모리의 시작 주소를 포인터 변수에 맵핑(`mmap()`)시킵니다.

- 전달할 데이터를 공유 메모리에 입력(`sprintf()`)합니다.

## POSIX 소비자 프로세스의 구현

- 생산자 프로세스가 생성한 공유 메모리 객체에 접근(`shm_open()`)합니다.

- 공유 메모리의 시작 주소를 포인터 변수에 맵핑(`mmap()`)시킵니다.

- 전달받을 데이터를 모두 소비했다면 링크를 삭제(`shm_unlink()`)합니다.




