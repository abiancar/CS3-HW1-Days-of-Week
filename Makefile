all:
	g++ -Wall dayOfWeek.cpp -o dow

run:
	./dow

try: all run
