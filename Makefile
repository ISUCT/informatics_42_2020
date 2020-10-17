CC = g++
.DEFAULT_GOAL = lab0
MAIN_FOLDER = CourseApp/CourseApp

CourseApp.o: $(MAIN_FOLDER)/CourseApp.cpp
	$(CC) -c $(MAIN_FOLDER)/CourseApp.cpp

lab0.o: $(MAIN_FOLDER)/lab0/lab0.cpp $(MAIN_FOLDER)/lab0/lab0.h
	$(CC) -c $(MAIN_FOLDER)/lab0/lab0.cpp

lab0: CourseApp.o lab0.o
	$(CC) CourseApp.o lab0.o

clean:
	rm *.o *.out