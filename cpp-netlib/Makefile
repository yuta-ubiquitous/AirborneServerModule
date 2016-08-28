sample: sample.o dronecontrol.o
	g++ -o sample dronecontrol.o sample.o \
	-L/usr/local/lib \
	-lcppnetlib-uri \
	-lcppnetlib-server-parsers \
	-lcppnetlib-client-connections \
	-lboost_thread-mt \
	-lboost_system-mt \
	-lssl \
	-lcrypto

sample.o: sample.cpp
	g++ -std=c++11 -c sample.cpp -I/usr/local/include

dronecontrol.o: dronecontrol.cpp
	g++ -std=c++11 -c dronecontrol.cpp -I/usr/local/include

clean:
	rm sample sample.o dronecontrol.o