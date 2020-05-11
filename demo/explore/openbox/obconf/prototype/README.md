
## Prototype

* [tree](tree)
* [main](main)
* [theme-set](theme-set)
* [theme-set-makefile](theme-set-makefile)

## Prepare

run

``` sh
$ sudo apt-get install build-essential
```

run

``` sh
$ sudo apt-get build-dep obconf
```


## Source Package

``` sh
$ apt-get source obconf
```

## Source File

| Target | Source |
| --- | --- |
| main.h | obconf-2.0.4+git20150213/src/main.h |
| tree.h | obconf-2.0.4+git20150213/src/tree.h |
| tree.c | obconf-2.0.4+git20150213/src/tree.c |

## Reference file

| Reference |
| --- |
| obconf-2.0.4+git20150213/src/main.c |
| obconf-2.0.4+git20150213/src/theme.c |


## pkg-config

run

``` sh
$ dpkg -L openbox-dev | grep pc
```

show

```
/usr/lib/x86_64-linux-gnu/pkgconfig/obrender-3.5.pc
/usr/lib/x86_64-linux-gnu/pkgconfig/obt-3.5.pc
```

run

``` sh
pkg-config --list-all | grep obt
```

show

```
obt-3.5                        Obt - Openbox Toolkit Library
```

run

``` sh
$ pkg-config --cflags --libs obt-3.5
```

show

```
-I/usr/include/openbox/3.6 -I/usr/include/glib-2.0 -I/usr/lib/x86_64-linux-gnu/glib-2.0/include -I/usr/include/libxml2 -lobt -lSM -lICE -lX11 -lglib-2.0 -lxml2
```

## Reference 

* http://www.study-area.org/cyril/opentools/opentools/x864.html
* https://blog.gtwang.org/programming/gcc-comipler-basic-tutorial-examples/
* https://blog.gtwang.org/programming/howto-create-library-using-gcc/
* https://www3.ntu.edu.sg/home/ehchua/programming/cpp/gcc_make.html
* https://github.com/JLErvin/berry/blob/master/Makefile

