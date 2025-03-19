# file 명령어의 활용
# 파일의 타입을 확인할 때 file 명령어를 사용하는데 이것도 경로에서 와일드 카드의 활용이 가능하다.
# file ./*로 현 경로 모두 파일 타입 확인 가능하다.
# find하고 이런 경로 와일드카드 활용을 했던 것 같은데 문제가 나오면 추가로 정리하자.
# 문제는 그렇게 해서 바이너리 파일이 아닌 Human-Readable 파일을 디렉토리에서 찾고 그 안에서 패스워드 뽑기
# bandit5 passwd - 4oQYVPkxZOOEOO5pTW81FB8j8lxXGUQw
ssh bandit5@bandit.labs.overthewire.org -p 2220