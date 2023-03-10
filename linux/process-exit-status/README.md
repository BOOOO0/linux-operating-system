# 프로세스 종료 상태

- 부모 프로세스는 자식 프로세스가 종료가 될 때 자식 프로세스의 종료 처리를 해야 합니다. 종료 처리 후에 부모 프로세스는 자식 프로세스가 종료될 때의 정보를 받습니다.

- 기본적인 정보는 자식 프로세스가 자신이 맡은 일을 성공했는지 실패했는지 실패했다면 무엇인지이며 다른 정보로는 정상적으로 종료가 되었는지, 시그널을 받아 종료되었는지, 사용된 시그널은 무엇인지, 코어 덤프를 남겼는지 등이 있을 수 있습니다.

- 예를 들어 셸이 부모 프로세스이고 자식 프로세스가 `ls`명령어라면 `ls`명령이 수행되고 셸은 `ls`명령의 종료 처리를 합니다. 부모 프로세스는 자식 프로세스가 종료된 결과를 받게 되고 성공 여부에 따라 다르게 작업을 수행할 수 있습니다.

## $?

- `echo $?`로 `?`환경변수에 대한 출력 명령어를 사용하면 바로 이전 명령에 대한 성공, 실패 여부를 확인할 수 있습니다.

- 이 성공, 실패에 대한 내용이 프로세스의 종료 상태라고 할 수 있습니다.