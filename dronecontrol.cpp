#include <boost/network/protocol/http/client.hpp>
#include <iostream>
#include "dronecontrol.h"

using namespace boost::network;

namespace drone{
	std::string Drone::http_exe( std::string url ){
			http::client client;
			http::client::request request(url);
			request << header("Connection", "close");
			http::client::response response = client.get(request);
			std::cout << body(response) << std::endl;
			return body(response);
		}
	std::string Drone::move_param_maker( int speed, int steps){
		std::string param = "";
		if( speed == -1 && steps == -1){
			return param;
		}else if(speed == -1){
			param += "?steps=" + std::to_string(steps);
			return param;
		}else if(steps == -1){
			param += "?speed=" + std::to_string(speed);
			return param;
		}else{
			param += "?speed=" + std::to_string(speed) + "&steps=" + std::to_string(steps);
			return param;
		}
	}

	Drone::Drone(std::string base_url, int port){
		this->base_url_ = base_url;
		this->port_ = port;
	}

	void Drone::connect(){
		std::string api = "/drone/connect";
		std::string url = this->base_url_ + ":" + std::to_string( this->port_ ) + api;
		std::cout << url << std::endl;
		http_exe(url);
	}

	void Drone::disconnect(){
		std::string api = "/drone/disconnect";
		std::string url = this->base_url_ + ":" + std::to_string( this->port_ ) + api;
		std::cout << url << std::endl;
		http_exe(url);
	}

	void Drone::takeoff(){
		std::string api = "/drone/control/takeoff";
		std::string url = this->base_url_ + ":" + std::to_string( this->port_ ) + api;
		std::cout << url << std::endl;
		http_exe(url);
	}

	void Drone::land(){
		std::string api = "/drone/control/land";
		std::string url = this->base_url_ + ":" + std::to_string( this->port_ ) + api;
		std::cout << url << std::endl;
		http_exe(url);
	}

	void Drone::forward(int speed, int steps){
		std::string api = "/drone/control/forward";
		std::string param = move_param_maker(speed, steps);
		std::string url = this->base_url_ + ":" + std::to_string( this->port_ ) + api + param;
		std::cout << url << std::endl;
		http_exe(url);
	}

	void Drone::backward(int speed, int steps){
		std::string api = "/drone/control/backward";
		std::string param = move_param_maker(speed, steps);
		std::string url = this->base_url_ + ":" + std::to_string( this->port_ ) + api + param;
		std::cout << url << std::endl;
		http_exe(url);
	}

	void Drone::up(int speed, int steps){
		std::string api = "/drone/control/up";
		std::string param = move_param_maker(speed, steps);
		std::string url = this->base_url_ + ":" + std::to_string( this->port_ ) + api + param;
		std::cout << url << std::endl;
		http_exe(url);
	}

	void Drone::down(int speed, int steps){
		std::string api = "/drone/control/down";
		std::string param = move_param_maker(speed, steps);
		std::string url = this->base_url_ + ":" + std::to_string( this->port_ ) + api + param;
		std::cout << url << std::endl;
		http_exe(url);
	}

	void Drone::tiltright(int speed, int steps){
		std::string api = "/drone/control/tiltright";
		std::string param = move_param_maker(speed, steps);
		std::string url = this->base_url_ + ":" + std::to_string( this->port_ ) + api + param;
		std::cout << url << std::endl;
		http_exe(url);
	}

	void Drone::tiltleft(int speed, int steps){
		std::string api = "/drone/control/tiltleft";
		std::string param = move_param_maker(speed, steps);
		std::string url = this->base_url_ + ":" + std::to_string( this->port_ ) + api + param;
		std::cout << url << std::endl;
		http_exe(url);
	}

	void Drone::turnright(int speed, int steps){
		std::string api = "/drone/control/turnright";
		std::string param = move_param_maker(speed, steps);
		std::string url = this->base_url_ + ":" + std::to_string( this->port_ ) + api + param;
		std::cout << url << std::endl;
		http_exe(url);
	}

	void Drone::turnleft(int speed, int steps){
		std::string api = "/drone/control/turnleft";
		std::string param = move_param_maker(speed, steps);
		std::string url = this->base_url_ + ":" + std::to_string( this->port_ ) + api + param;
		std::cout << url << std::endl;
		http_exe(url);
	}
}