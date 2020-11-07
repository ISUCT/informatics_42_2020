# Compiler
CC = g++

# Target
TARGET = lab1

# Sources
MAIN_FOLDER = CourseApp/CourseApp
LIBRARY_FOLDER = $(MAIN_FOLDER)/lib

all: CourseApp.o $(TARGET).o
	$(CC) $^ -o $(TARGET).out

CourseApp: CourseApp.o
	$(CC) $^ -o $(TARGET).out

CourseApp.o: $(MAIN_FOLDER)/CourseApp.cpp
	$(CC) -c $^

$(TARGET).o: $(wildcard $(MAIN_FOLDER)/$(TARGET)/*.cpp)
	$(CC) -c $^

clean:
	rm -rf *.o *.out