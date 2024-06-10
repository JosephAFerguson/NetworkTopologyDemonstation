#pragma once
class Conn {
private:
	/*
	* Template for later switch or controller data class
	* 
	* 
	*/
	std::string forNow;
public:
	Conn() {
		forNow = "blank";
	}
	Conn(std::string in) {
		forNow = in;
	}
	std::string getData() {
		return forNow;
	}
	operator std::string(){
		return forNow;
	}
	bool operator==(Conn right){
		return forNow == right.getData();
	}
	bool operator!=(Conn right) {
		return forNow != right.getData();
	}
};