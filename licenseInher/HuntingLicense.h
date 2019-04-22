#ifndef HUNTINGLICENSE_H
#define HUNTINGLICENSE_H
#include "License.h"
#include <string>

class HuntingLicense : public License{
	public:
		HuntingLicense();

		std::string getDOB()const {return dob;}
		std::string getDateIssued()const {return date_issued;}

		void setDOB(std::string dob) {this->dob = dob;}
		void setDateIssued(std::string date_issued) {this->date_issued = date_issued;}

		void print()const;

	private:
		std::string dob, date_issued;
};

#endif // HUNTINGLICENSE_H
