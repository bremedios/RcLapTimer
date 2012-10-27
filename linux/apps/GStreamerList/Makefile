
all: GStreamerList

distclean:
	rm -f GStreamerList

clean:
	rm -f *.o
	rm -f *~

GStreamerList.o: GStreamerList.cpp
	$(CC) GStreamerList.cpp -c `pkg-config --cflags gstreamer-0.10` -Wall

GStreamerList: GStreamerList.o
	$(CC) GStreamerList.o `pkg-config --libs gstreamer-0.10` -o GStreamerList
