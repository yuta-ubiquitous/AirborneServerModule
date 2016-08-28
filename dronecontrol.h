#include <boost/network/protocol/http/client.hpp>
#include <iostream>

namespace drone{
	class Drone{
		private:
			std::string base_url_;
			int port_;
			std::string http_exe( std::string url );
			std::string move_param_maker( int speed, int steps);
			std::string drive_param_maker( int tilt, int forward, int turn, int up, int steps );
		public:
			Drone(std::string base_url, int port);
			void connect();
			void disconnect();
			void takeoff();
			void land();
			void forward(int speed, int steps);
			void backward(int speed, int steps);
			void up(int speed, int steps);
			void down(int speed, int steps);
			void tiltright(int speed, int steps);
			void tiltleft(int speed, int steps);
			void turnright(int speed, int steps);
			void turnleft(int speed, int steps);
			void drive(int tilt, int forward, int turn, int up, int steps);
	};
}