
all: RcLapTimer

RcLapTimer.o: RcLapTimer.cpp
	$(CXX) RcLapTimer.cpp -c `pkg-config --cflags gstreamer-0.10`
    
RcLapTimer: RcLapTimer.o
	$(CXX) RcLapTimer.o `pkg-config --libs gstreamer-0.10` -o RcLapTimer
