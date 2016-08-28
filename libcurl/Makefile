sample: sample.o dronecontrol.o
	g++ -o sample dronecontrol.o sample.o \
	-L/usr/local/lib \
	-lcurl \
	-lssl \
	-lcrypto \
	-lssl \
	-lcrypto \
	-lldap

sample.o: sample.cpp
	g++ -c sample.cpp -I/usr/local/include

dronecontrol.o: dronecontrol.cpp
	g++ -c dronecontrol.cpp -I/usr/local/include

clean:
	rm sample sample.o dronecontrol.o