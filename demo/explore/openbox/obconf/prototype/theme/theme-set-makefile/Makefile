
#CFLAGS = `pkg-config --cflags --libs obt-3.5 gtk+-3.0`
CFLAGS = $(shell pkg-config --cflags --libs obt-3.5 gtk+-3.0)


APP = demo
SRC = main.c tree.c
OBJ = ${SRC:.c=.o}

default: $(APP)
.PHONY: default


$(APP): $(OBJ)
	${CC} -o $@ $(OBJ) ${CFLAGS}
	
clean:
	rm -f $(APP)
	rm -f $(OBJ)
.PHONY: clean


test-numix:
	./$(APP) Numix &
	sleep 1
	killall -9 $(APP)
.PHONY: test-numix


test-numix-blue:
	./$(APP) NumixBlue &
	sleep 1
	killall -9 $(APP)
.PHONY: test-numix-blue



