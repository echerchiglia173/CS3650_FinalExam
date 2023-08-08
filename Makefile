

#Variables
#-std=c++11 for c++11
CFLAGS = -Wall
CC = g++
#Linking all the files
#Create the executable program "rectangle-main"
functions: functions.cc
		$(CC) $(CFLAGS) functions.o -o count\

# remove all the object and executable files from within 
clean:
	rm -f functions.o main
