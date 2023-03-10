sources := main.cpp ./lib/*.cpp
headers := ./lib/*.h

release: 
	g++ $(sources) $(headers) -o main