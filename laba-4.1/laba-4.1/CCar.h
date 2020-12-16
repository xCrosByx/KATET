#pragma once
#include<iostream>

using namespace std;

class CCar
{

private:

	int carNumber;
	string carColur;
	string carBrend;

public:

	CCar();

	CCar(int carNumber, string carColur, string carBrend);

	friend std::ostream& operator<< (std::ostream& out, const CCar& point) {

		out << "-------------" << endl;
		out << point.carNumber << endl;
		out << point.carColur << endl;
		out << point.carBrend << endl;

		return out;
	}

	friend bool operator>(const CCar& left, const CCar& right);
	friend bool operator<(const CCar& left, const CCar& right);

};
#pragma once
