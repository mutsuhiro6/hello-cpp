gcc_options = -std=c++17 -Wall --pedantic-error

compile:
	g++ $(gcc_options) -include all.h ./src/$(TARGET).cpp -o ./bin/$(TARGET)

run:
	./bin/$(TARGET)

clean:
	rm ./bin/*