no:
	gcc no.c -o no

install:
	mkdir -p $(DESTDIR)/usr/bin
	install -m 0755 no $(DESTDIR)/usr/bin/no

uninstall:
	rm -f $(DESTDIR)/usr/bin/no

clean:
	rm -f no
