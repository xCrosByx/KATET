#include "CCar.h"

CCar::CCar()
{
}

CCar::CCar(int carNumber, string carColur, string carBrend)
{

	this->carNumber = carNumber;
	this->carColur = carColur;
	this->carBrend = carBrend;


}

bool operator>(const CCar& left, const CCar& right)
{

	if (left.carNumber > right.carNumber) {

		return true;
	}
	else return false;

}

bool operator<(const CCar& left, const CCar& right)
{
	if (left.carNumber < right.carNumber) {

		return true;
	}
	else return false;
}