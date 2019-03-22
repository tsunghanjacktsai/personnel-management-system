CXX        := g++
CXX_FLAGS  := -Wall -Wextra -std=c++17

build:
	$(CXX) *.cpp $(CXX_FLAGS) -o main.exe

run:
	$(CXX) *.cpp $(CXX_FLAGS) -o main.exe
	.\main.exe
