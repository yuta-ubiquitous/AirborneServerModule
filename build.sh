#!/bin/sh
g++ -std=c++11 sample.cpp dronecontrol.cpp -o sample \
-I/usr/local/include \
-L/usr/local/lib \
-lpthread -lboost_system -lboost_thread -lcppnetlib-uri -lcppnetlib-client-connections -lssl -lcrypto