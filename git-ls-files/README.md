# git ls-files

- `git ls-files`명령어는 git 레포지토리 내에 있는 파일과 그 파일의 경로의 표시를 출력하는 명령어입니다.

## -d

- `-d` 옵션을 사용하면 삭제된 파일들만 출력할 수 있습니다.

## -m

- `-m` 옵션을 사용하면 수정된 파일들만 출력할 수 있습니다.

## -o

- `-o` 옵션은 git status에서 Untracked 상태인 파일, 디렉토리들을 출력해줍니다.

## -i

- `-i` 옵션은 exclude-pattern에 해당이 되어서 exclude된(ignore) 파일들을 출력하고 싶을 때 사용 가능한 옵션입니다.

## --exclude=[패턴]

- `--exclude` 옵션은 pattern을 인자로 받아서 해당 패턴에 해당하는 파일, 디렉토리들을 제외하는 옵션입니다. 

## --exclude-standard

- `--exclude-standard` 옵션은 표준 깃 제외 패턴을 적용하는 옵션입니다. 

- 표준 깃 제외 패턴은 `.git/info/exclude`파일에 명시된 파일, 디렉토리나 각 디렉토리에서 .gitignore 파일을 생성하여 명시한 파일, 디렉토리, 그리고 유저가 명시한 전역 제외 파일을 제외하는 패턴입니다.

