all: compile link
compile:
	g++ .\test.cpp -o test
link:
	.\test.exe
