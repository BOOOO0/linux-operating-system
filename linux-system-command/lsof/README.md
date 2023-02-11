# lsof

- 시스템내에 열려있는 파일들의 목록을 조회하고 파일을 사용하는 프로세스, 디바이스 정보, 파일의 종류 등 자세한 정보를 출력합니다.

- 유닉스 계열 운영체제는 추상화된 파일 시스템을 사용하기 때문에 일반 파일 뿐만 아니라 소켓, memory-mapped file 등 파일로 추상화된 모든 자원을 조회할 수 있습니다.

- `lsof`명령어를 통해 열린 파일들을 모니터링하면 어떤 명령을 수행한 후 특정 파일이 닫히지 않고 계속 열려있는 경우를 찾아서 해결할 수 있습니다.

## 필드별 의미

- COMMAND : 실행한 명령어

- PID : process id

- USER : 실행한 사용자

- FD: File Descriptor

    - cwd: current working directory

    - rtd: root directory

    - mem : memory-mapped file

    - txt: program text (code and data)

- TYPE: 파일 종류

    - DIR: 디렉토리

    - CHR: character special file

    - REG: regular file

    - unix: 유닉스 도메인 소켓 (MySQL 등이 사용하는 소켓으로 로컬 프로세스에서만 사용 가능하며 TCP/UDP 보다 속도가 매우 빠름)

- DEVICE : 장치 번호

- SIZE/OFF: 파일의 크기나 오프셋

- NODE: 노드 번호

- NAME:  파일명

## 옵션별 의미

- `-U` : Unix domain socket만 조회합니다.

- `-i` : internet domain socket만 조회합니다.

- `-p [PID]` : PID를 인자로 전달해 해당 프로세스가 open한 파일의 목록을 조회합니다.

- `-u` : 유저 ID를 인자로 전달해서 해당 유저가 사용하는 open된 파일들의 목록을 조회합니다.

- `-c [COMMAND]` : 특정 COMMAND를 기준으로 프로세스가 open한 파일들의 목록을 조회합니다. 사용 예시는 `lsof -c lsof`라면 `lsof`가 실행되면서 open된 파일들의 목록을 조회할 수 있습니다.

- 두개의 옵션을 조합해서 사용할 경우 OR연산으로 조회가 됩니다. AND연산으로 조회를 하고 싶은 경우 `-a`를 사용해서 `lsof -c node -a -U`로 node가 open한 파일들 중 유닉스 도메인 소켓만 조회할 수 있습니다.