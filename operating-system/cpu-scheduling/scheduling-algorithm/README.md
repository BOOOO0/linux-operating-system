# CPU 스케줄링

- CPU 스케줄링은 ready 큐에 있는 프로세스들 중 어떤 프로세스를 CPU 코어에 할당할 것인지를 결정하는 문제입니다.

- FCFS - First-Come, First-Served로 먼저 들어온 프로세스를 먼저 실행합니다.

- SJF(SRTF) - Shortest Job First(Shortest Remaining Time First)로 가장 짧은 작업을 먼저 처리합니다. 가장 짧은 작업은 종료되기 까지 남은 시간이 가장 짧은 프로세스를 의미합니다.

- RR - Round-Robin으로 시분할을 사용해서 모든 프로세스들이 정해진 시간 할당량 만큼만 실행되고 그 후 다른 프로세스를 실행시킵니다.

- 우선순위 기반 스케줄링 - 우선순위의 기준을 선정해서 우선순위가 높은 프로세스를 먼저 실행시킵니다.

- MLQ - Multi-Level Queue로 다단계 큐 스케줄링을 통해 다른 스케줄링 알고리즘을 상황에 따라 적용시킵니다.

- MLFQ - Multi-Level Feedback Queue로 MLQ에서 피드백을 반영해 적용시킨 스케줄링 알고리즘이 잘 동작하지 않은 경우 다른 알고리즘을 적용시킵니다.