cd smalltalk
autoreconf -vi && ./configure && make      #Building 32-bit

export CFLAGS="$CFLAGS -m64"
autoreconf -vi && ./configure && make      #Building 64-bit
