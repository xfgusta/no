all:
    cc no.c -o no

install:
    install -m 0755 no /usr/local/bin/no

uninstall:
    rm -f /usr/local/bin/no

clean:
    rm -f no
