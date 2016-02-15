#pragma once
#include <iostream>
using  namespace std;
#include <string>
using std::string;

enum TakeMode { TAKE = 0x01, CHANGE, GET };

class ITake
{
public:
	virtual string TakeAPicture() = 0;
	virtual void ChangeMode(bool mode) = 0;
	virtual bool GetMode() = 0;
};