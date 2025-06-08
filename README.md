<p align="center">
    <img align="center" alt="2048 in action!" src="assets/demo.gif"></img>
</p>

## Goal

이 프로젝트의 목표는 C++로 구현된 2048 게임을  Docker 환경에서 누구나 쉽게 설치하고 실행할 수 있도록 제공하는 것입니다.
복잡한 개발 환경 설정 없이 Docker만 설치되어 있으면, 터미널에서 2048 게임을 바로 실행할 수 있습니다.

### Requirements

* Ubuntu: 22.04
* g++: 11.4.0
* cmake: 3.22.1
* make: 4.3

### How to install & Run

1. Docker 이미지 다운로드 및 설치
(1) 이미지 파일 다운로드
제공받은 Docker 이미지 파일(final_2021040003_v1.tar)을 원하는 디렉토리에 저장합니다.
(2) 이미지 등록
```sh
docker load -i final_2021040003_v1.tar
```
* 위 명령으로 이미지가 Docker에 등록됩니다.
2. Docker 컨테이너 생성 및 실행
```sh
docker run -it --rm final_2021040003:v1
```
* -it : 터미널 상호작용 모드
* --rm : 컨테이너 종료 시 자동 삭제

---

## Contributing

First of all, thank you for contributing :smile:! A few things to note:

* If you have found a bug, or have a feature that you'd like implemented, [raise an issue](https://github.com/plibither8/2048.cpp/issues).

* If you have proposed a pull request, make sure that you run `clang-format` on the source code (both, `.cpp` and `.hpp`) files if you've made changes there.

* In your local repository, run `git update-index --skip-worktree ./data/*.txt` to ensure that changes to the data files are not tracked by git, and thus are not staged.

## Thanks

I deeply appreciate the help of the following people:

* [Michael Hirsch](https://github.com/scivision)
  * cleaned up the code,
  * organised the header files in a better way for a more efficient build,
  * added the AppVeyor CI,
  * added the Meson build system and, fixed CMake and added install feature.
* [Aiman Ismail](https://github.com/pokgak) added support for Vim keybinding.
* [Patrik Huber](https://github.com/patrikhuber) fixed a typo in the Readme.
* [zestze](https://github.com/zestze) changed `cstdlib rand` to C++ random int generator.
* [Pascal J. Bourguignon](https://github.com/informatimago) added support for ANSI arrow keys.
* [Jean-Michaël Celerier](https://github.com/jcelerier) added `CMakeLists.txt` file.
* [comwrg](https://github.com/comwrg) made the duration in the statistics and highscores human-readable, wrapping seconds to minutes and hours.
* [Christian Bundy](https://github.com/christianbundy) replaced the ugly -, + and | with box-drawing characters.
* [Tor E Hagemann](https://github.com/hagemt) fixed issue #10, causing unwanted character `1` to be printed.
* [farazxameer](https://github.com/farazxameer) implemented feature to save a game state and continue from a saved game state, refined game logic.
* [drodil](https://github.com/drodil) implemented checks to ascertain existence of data files, fixed issue #12
* [Aviskar KC](https://github.com/aviskarkc10) added arrow keys to game instructions.
* [Peter Squicciarini](https://github.com/stripedpajamas) fixed readme instructions.
* [Mark Fischer, Jr.](https://github.com/flyingfisch) fixed a typo.
* [Hugo Brandão](https://github.com/jhugobb) completely reorganised the existing project structure and updated the build method to enfore CMake.
* [Alton Alvarez](https://github.com/mathematicalist) fixed a typo.
* [cawvyoct](https://github.com/cawvyoct) made the source code much, much easier to read: removed most magic numbers, replacing them with variables to ease maintenance. Implemented `clang-format`.
* [Cong](https://github.com/cxong) edited the `Game` class constructor.
* [Tien Do](https://github.com/tiendq) added the 'exit' option in the main menu, updated the `CMakeLists.txt` file and made `Color` enum to a scoped enum.
* [ScorrMorr](https://github.com/ScorrMorr) made many methods `const`s.
* [tangmengqiu](https://github.com/tangmengqiu) fixed an error-causing instruction step in the readme.

### Maintainers

* [Mihir Chaturvedi](https://github.com/plibither8)
* [cawvyoct](https://github.com/cawvyoct)

## Notes

`[GameBoard].getTile(2,0)` refers to the 0th tile (or column) in 2nd row as in this case, x = 0 and y = 2. The specific tile is denoted the by '@' symbol in the following gameboard:

> Note: `row` and `column` indexing starts at 0.

```plaintext
┌──────┬──────┬──────┬──────┐
│      │      │      │      │
├──────┼──────┼──────┼──────┤
│      │      │      │      │
├──────┼──────┼──────┼──────┤
│   @  │      │      │      │
├──────┼──────┼──────┼──────┤
│      │      │      │      │
└──────┴──────┴──────┴──────┘
```

## To-Do

- [x] Add start menu [19/04/2018]
- [x] Save highscore / score [21/04/2018]
- [x] Save a game state and play from a saved game state
- [ ] ~~AI~~ *(Abandoned indefinitely)*

---

## License

Copyright (c) Mihir Chaturvedi. All rights reserved.

Licensed under the [MIT](LICENSE) License.
