CFLAGS=`pkg-config --cflags gtk+-3.0` `pkg-config --libs gtk+-3.0` -Wall
OBJS=RcLapTimer.o GStreamerSink.o LeaderBoards_Ui.o
LDFLAGS=`pkg-config --libs gstreamer-0.10` `pkg-config --libs gtk+-3.0`

all: RcLapTimer

RcLapTimer: $(OBJS)
	$(CXX) $(OBJS) $(LDFLAGS) -o RcLapTimer

%.o : %.cpp
	$(CXX) $(CFLAGS) -c $<

clean:
	rm *~ -f
	rm *.o -f

distclean:
	rm RcLapTimer -f


    

