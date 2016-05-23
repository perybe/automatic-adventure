freq: freq.c
	cc -o freq freq.c 

wc2: wc2.c
	cc -o wc2 wc2.c

astyle: wc2.c freq.c
	astyle wc2.c
	astyle freq.c
	

clean:
	rm freq
	rm wc2
	rm freq.c.orig
	rm wc2.c.orig
