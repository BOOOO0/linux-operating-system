# 재밌는 함정은 파일명이 - 인데 이걸 확인하기 위해서 'cat -', 'head -'하면 옵션 사용으로 인식해서 동작이 안된다.
# 경로로 head ./-로 했는데 쿠버네티스 공부 때 커맨드 옵션 -- 처럼 리눅스 명령어에도 --이 있는데
# cat -- - 하면 --에서 모든 옵션을 끝내고 그 다음 명령어의 파라미터를 받는다는 의미이다.
# 그러니까 -- - 하면 옵션 끝나고 내용 출력할 파일명이 와야 하니 -를 파일명으로 인식하는 것이다.
# bandit2 passwd - 263JGJPfgU6LtdEvgfWU1XP5yac29mFx
ssh bandit2@bandit.labs.overthewire.org -p 2220