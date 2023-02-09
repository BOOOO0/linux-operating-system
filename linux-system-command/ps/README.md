# ps

- process status를 보여주는 명령어입니다.

- |옵션|의미|
  |:-:|:-:|
  |-e|모든 프로세스 출력|
  |-f|Full-format으로 프로세스에 대한 모든 정보 출력|
  |-F|SZ, RSS, PSR을 포함한 더 많은 정보 출력|
  |-L|Thread까지 출력|
  |--forest|부모-자식 관계를 트리 형태로 출력|
  |-o|원하는 필드를 선택해서 출력|
  |--sort [필드명]|필드의 값을 기준으로 정렬해서 출력|

- `ps -eo pid,c,user,args --sort pid`는 프로세스의 정보 중 pid, c, user, args 필드만 pid를 기준으로 정렬해서 출력합니다.

- |코드|필드|의미|
  |:-:|:-:|:-:|
  |user|UID/USER|유저 이름|
  |pid|PID|프로세스 ID|
  |tty|TTY|실행 터미널|
  |cputime|TIME|누적 CPU 사용 시간|
  |args|CMD|실행 커맨드 라인|
  |stime|STIME|프로세스 시작 시간/날짜|
  |c|C|CPU 사용률|
  |%cpu|%CPU|CPU 사용률|