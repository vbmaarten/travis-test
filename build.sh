cd smalltalk

echo ""
echo ""
echo ""
echo "########################"
echo "#    BUILDING 32-BIT   #"
echo "########################"
echo ""
echo ""
echo ""
autoreconf -vi && ./configure && make      #Building 32-bit
echo ""
echo ""
echo ""
echo "########################"
echo "#    BUILDING 64-BIT   #"
echo "########################"
echo ""
echo ""
echo ""
export CFLAGS="$CFLAGS -m64"
autoreconf -vi && ./configure && make      #Building 64-bit
