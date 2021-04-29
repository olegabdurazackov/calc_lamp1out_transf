TARGET = calc-lamp_out1transf
CHILD  = lampout1trans
LIB    = charint
CC     = g++
$(TARGET): $(LIB).h $(LIB).cpp $(CHILD).h $(CHILD).cpp main.cpp
	$(CC) -o $(TARGET) $(LIB).h $(LIB).cpp $(CHILD).h $(CHILD).cpp main.cpp

install: $(TARGET)
	mv $(TARGET) /usr/local/bin/

uninstall: $(TARGET)
	rm lampout1trans /usr/local/bin/$(TARGET)

clear:
	rm *.o

