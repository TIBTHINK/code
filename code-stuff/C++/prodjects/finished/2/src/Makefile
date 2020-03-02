#
#	GNU make
# 
PREFIX = /usr/local
MANDIR = /usr/share/man/man7
LIBS   = -lc 
CXXFLAGS = -std=c++11

all: love love.7.gz

love: love.cpp
	$(CXX) $(CXXFLAGS) love.cpp -o love $(LDFLAGS) $(LIBS)

love.7.gz:
	gzip -f love.7

install: love love.7.gz
	install -m 0755 -s love $(PREFIX)/bin
	install -m 0644 love.7.gz /usr/share/man/man7/
	
	-@rm love love.7*

uninstall:
	-@rm $(PREFIX)/bin/love
	-@rm /usr/share/man/man7/love.7.gz

clean:
	-@rm love love.7*
