# All Targets
all: CoronaVirus

# Tool invocations
# Executable "hello" depends on the files hello.o and run.o.
CoronaVirus:  clean bin/main.o bin/Session.o bin/Graph.o
	@echo 'Building target: cTree'
	@echo 'Invoking: C++ Linker'
	g++ -o bin/test  bin/main.o bin/Session.o bin/Graph.o
	@echo 'Finished building target: cTree'
	@echo ' '

# Depends on the source and header files
bin/main.o: src/main.cpp
	g++ -g -Wall -Weffc++ -std=c++11 -c -Iinclude -o bin/main.o src/main.cpp

# Depends on the source and header files
bin/Session.o: src/Session.cpp
	g++ -g -Wall -Weffc++ -std=c++11 -c -Iinclude -o bin/Session.o src/Session.cpp

bin/Graph.o: src/Graph.cpp
	g++ -g -Wall -Weffc++ -std=c++11 -c -Iinclude -o bin/Graph.o src/Graph.cpp

#Clean the build directory
clean:
	rm -f bin/*
