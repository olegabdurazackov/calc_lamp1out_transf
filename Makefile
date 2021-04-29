TARGET = lampout1trans
CHILD  = lampout1trans
LIB    = charint
CC     = g++
$(TARGET): $(LIB).h $(LIB).cpp $(CHILD).h $(CHILD).cpp main.cpp
	$(CC) -o $(TARGET) $(LIB).h $(LIB).cpp $(CHILD).h $(CHILD).cpp main.cpp

install: lampout1trans
	mv lampout1trans /usr/local/bin/

uninstall: lampout1trans
	rm lampout1trans /usr/local/bin/lampout1trans

clear:
	rm *.o

