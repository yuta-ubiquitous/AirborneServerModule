#include "dronecontrol.h"
#include <iostream>
#include <unistd.h>

using namespace std;

int main(){
	int sleep_second = 5;
	drone::Drone *drone = new drone::Drone("http://127.0.0.1", 8888);
	drone->connect();

	drone->takeoff();
	sleep(sleep_second);

	drone->forward(-1, -1);
	sleep(sleep_second);
	
	drone->backward(-1, -1);
	sleep(sleep_second);
	
	drone->up(-1, -1);
	sleep(sleep_second);
	
	drone->down(-1, -1);
	sleep(sleep_second);
	
	drone->tiltright(-1, -1);
	sleep(sleep_second);
	
	drone->tiltleft(-1, -1);
	sleep(sleep_second);
	
	drone->turnright(-1,-1);
	sleep(sleep_second);
	
	drone->turnleft(-1,-1);
	sleep(sleep_second);
	
	drone->drive(0,0,90,0,-1);
	sleep(sleep_second);
	
	drone->land();
	drone->disconnect();
	return 0;
}