
all: RcLapTimer GStreamerList

RcLapTimer.o: RcLapTimer.cpp
	$(CC) RcLapTimer.cpp -c `pkg-config --cflags gstreamer-0.10` -Wall
    
GStreamerList.o: GStreamerList.cpp
	$(CC) GStreamerList.cpp -c `pkg-config --cflags gstreamer-0.10` -Wall

RcLapTimer: RcLapTimer.o
	$(CC) RcLapTimer.o `pkg-config --libs gstreamer-0.10` -o RcLapTimer

GStreamerList: GStreamerList.o
	$(CC) GStreamerList.o `pkg-config --libs gstreamer-0.10` -o GStreamerList
