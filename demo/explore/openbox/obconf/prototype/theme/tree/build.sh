
gcc -c -o tree.o tree.c $(pkg-config --cflags --libs obt-3.5 gtk+-3.0)

# pkg-config --list-all | grep ob
# http://www.study-area.org/cyril/opentools/opentools/x864.html
