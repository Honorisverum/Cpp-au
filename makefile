all: main

main: main.cpp
	clang++ -Wall -Wextra -std=c++14 -o main main.cpp
	@./main
	@rm main

smoke: main
