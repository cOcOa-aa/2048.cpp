<p align="center">
    <img align="center" alt="2048 in action!" src="assets/demo.gif"></img>
</p>

## Goal

이 프로젝트의 목표는 C++로 구현된 2048 게임을  Docker 환경에서 누구나 쉽게 설치하고 실행할 수 있도록 제공하는 것입니다.
복잡한 개발 환경 설정 없이 Docker만 설치되어 있으면, 터미널에서 2048 게임을 바로 실행할 수 있습니다.

---

### Requirements

* Ubuntu: 22.04
* g++: 11.4.0
* cmake: 3.22.1
* make: 4.3

---

### How to install & Run

#### 1. Docker 이미지 다운로드 및 설치
* (1) 이미지 파일 다운로드
제공받은 Docker 이미지 파일(final_2021040003_v1.tar)을 원하는 디렉토리에 저장합니다.
* (2) 이미지 등록
```sh
docker load -i final_2021040003_v1.tar
```
* 위 명령으로 이미지가 Docker에 등록됩니다.

#### 2. Docker 컨테이너 생성 및 실행
```sh
docker run -it --rm final_2021040003:v1
```
* -it : 터미널 상호작용 모드
* --rm : 컨테이너 종료 시 자동 삭제

#### 3. 실행 종료 방법
게임 플레이 중:

- M 키를 눌러 메뉴로 이동하거나 터미널에서 Ctrl+C를 눌러 종료할 수 있습니다.
- 컨테이너가 종료되면 자동으로 삭제됩니다.

---

### 디렉토리 구조

```sh
2048.cpp/
├── CMakeLists.txt       # CMake 빌드 설정 파일
├── src/                 # C++ 소스 코드 디렉토리
│   └── ...              # .cpp, .hpp 파일 등
├── data/                # 게임 데이터 파일
├── assets/              # 게임 데모 이미지, gif 등
├── README.md            # 프로젝트 설명 문서
└── ...
```

---

## License

Copyright (c) Mihir Chaturvedi. All rights reserved.

Licensed under the [MIT](LICENSE) License.