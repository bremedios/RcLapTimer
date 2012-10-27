
all:
	make -C linux

distclean: clean
	make -C linux distclean

clean:
	make -C linux clean
	rm *~ -f
    
