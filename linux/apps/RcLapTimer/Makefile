
all: RcLapTimer

clean:
	rm *~ -f
	rm *.o -f

distclean:
	rm RcLapTimer -f

RcLapTimer.o: RcLapTimer.cpp
	$(CC) RcLapTimer.cpp -c `pkg-config --cflags gstreamer-0.10` -Wall
    
RcLapTimer: RcLapTimer.o
	$(CC) RcLapTimer.o `pkg-config --libs gstreamer-0.10` -o RcLapTimer

