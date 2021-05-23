# name: Sanjeevram Duraivelu
# cruzid: sduraive 
# class:  CSE15L
# date:   10//7/19
# description: This file makes an executable so Submit.c can compile 
			
ASSIGNMENT = pa1	
EXEBIN     = Subset
SOURCES    = $(EXEBIN).c
OBJECTS    = $(EXEBIN).o
FLAGS      = -std=c99 -Wall
FILES      = $(SOURCES) Makefile README
SUBMIT     = submit  cse015-pt.f19  pa1  $(FILES)   
CHECK      = ls  /afs/cats.ucsc.edu/class/cse015-pt.f19/pa1/sduraive

$(EXEBIN) : $(OBJECTS)
	gcc -o $(EXEBIN) $(OBJECTS)

$(OBJECTS) : $(SOURCES)
	gcc -c $(FLAGS) $(SOURCES)

clean :
	rm -f $(EXEBIN) $(OBJECTS)

submit : $(FILES)
	$(SUBMIT)

check :
	$(CHECK)
