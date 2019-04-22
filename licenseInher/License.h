#ifndef LICENSE_H
#define LICENSE_H
#include <string>

class License{
	public:
		License();

		std::string getName()const {return name;}
		std::string getIDNum()const {return id_num;}
		std::string getDate()const {return date;}

		void setName(std::string name) {this->name = name;}
		void setIDNum(std::string id) {this->id_num = id;}
		void setDate(std::string date) {this->date = date;}
	protected:
		std::string name, id_num, date;
};

#endif // LICENSE_H
