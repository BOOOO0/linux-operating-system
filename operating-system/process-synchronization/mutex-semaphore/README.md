# Mutex, Semaphore

- 경쟁 상태를 해결하기 위해 필요한 요소 중 상호 배제를 사용해서 경쟁 상태를 해결하기 위한 동기화 도구로 Mutex Locks, Semaphore, Monitor가 있고 교착 상태 방지까지 해결하는 도구로 Liveness가 있다.

- Mutex는 2개의 프로세스, 스레드를 제어할 수 있고 Semaphore는 N개를 제어할 수 있다.

## Mutex Lock

- Mutex는 임계 영역에 진입할 때 Lock을 사용해서 진입하고 나올때 Lock을 반납하는 식으로 제어를 한다.

- 임계 영역의 Entry 부분에 acquire 함수를 Exit 부분에 release 함수를 사용한다.

- 진입 가능 여부는 Boolean 변수를 사용해서 True라면 진입하고 False라면 진입을 할 수 없도록 해서 알 수 있도록 한다.

- Mutex의 구현 방식은 Boolean 변수가 True가 되고 진입 권한을 얻어서 acquire되기 까지 while 루프를 돌면서 Busy Waiting을 하는데 이 부분이 CPU의 낭비가 될 수 있지만 멀티 코어 시스템이라면 CPU 점유를 그대로 유지하면서 권한을 얻으면 그대로 점유하던 CPU 코어에서 실행하므로 문맥 교환이 일어나는 시간을 줄일 수 있는 장점이 있다.

- mutex.c의 실행 결과는 20000으로 일관된 결과만 나오는 것을 확인할 수 있다.

## Semaphore

- Semaphore는 Lock의 갯수를 의미한다고 볼 수 있는 정수 변수 S와 Wait와 Signal로 이루어져 있다. Wait에서는 S가 0보다 크거나 같으면 S를 감소시키고 임계 영역에 진입한다. Signal에서는 S를 증가시키고 Exit한다. 진입 가능한 Limit가 N개이고 N개가 가득 찬 상태라면 Waiting을 하는 방식으로 구현되어 있다.

- Semaphore에서의 Waiting은 Busy Waiting 하지 않고 프로세스를 Wait Queue로 보내고 대기시킨다. 다른 프로세스가 Signal을 보내고 Lock에 여유가 생기면 Ready Queue로 이동한다. 이 부분은 Wait에서 sleep 명령어로 Signal에서 wakeup 명령어로 프로세스에 시스템 콜을 보내서 구현한다.

- **_이론은 위와 같지만 단순히 sem_init에서 S 값을 N으로 주면 N개의 스레드가 서로 경쟁 상태에 놓이는 것 같은데 구체적인 구현이 별도로 필요한 것 같다._**