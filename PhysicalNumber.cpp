#include <iostream>
#include <sstream>
#include <stdexcept>
#include "PhysicalNumber.h"

using namespace std;

namespace ariel{

PhysicalNumber::PhysicalNumber(double parameter,Unit unit){
	_parameter = parameter;
	_unit = unit;
}	
    
    //unary operators
    const PhysicalNumber PhysicalNumber::operator+()const{return PhysicalNumber(+this->_parameter,this->_unit);}
    const PhysicalNumber PhysicalNumber::operator-()const{return PhysicalNumber(-this->_parameter,this->_unit);}
    
    
    const PhysicalNumber PhysicalNumber::operator+(const PhysicalNumber& p){
    if(this->_unit == Unit::KM || this->_unit == Unit::M || this->_unit == Unit::CM){
    switch (p._unit)
    {
    	case Unit::CM:

        if(this->_unit == Unit::KM) return PhysicalNumber(this->_parameter+p._parameter/1000000,this->_unit);
        else if(this->_unit == Unit::M)return PhysicalNumber(this->_parameter+p._parameter/1000,this->_unit);
        else return PhysicalNumber(this->_parameter+p._parameter,this->_unit);
        
    	case Unit::M:

        if(this->_unit == Unit::KM) return PhysicalNumber(this->_parameter+p._parameter/1000,this->_unit);
        else if(this->_unit == Unit::M)return PhysicalNumber(this->_parameter+p._parameter,this->_unit);
        else return PhysicalNumber(this->_parameter+p._parameter*1000,this->_unit);

	case Unit::KM:

        if(this->_unit == Unit::KM) return PhysicalNumber(this->_parameter+p._parameter,this->_unit);
        else if(this->_unit == Unit::M)return PhysicalNumber(this->_parameter+p._parameter*1000,this->_unit);
        else return PhysicalNumber(this->_parameter+p._parameter*1000000,this->_unit);

        default : throw std::invalid_argument("different dimentions");
    }
}
     if(this->_unit == Unit::G || this->_unit == Unit::KG || this->_unit == Unit::TON){
    switch (p._unit)
    {
    	case Unit::G:

        if(this->_unit == Unit::TON) return PhysicalNumber(this->_parameter+p._parameter/1000000,this->_unit);
        else if(this->_unit == Unit::KG)return PhysicalNumber(this->_parameter+p._parameter/1000,this->_unit);
        else return PhysicalNumber(this->_parameter+p._parameter,this->_unit);
        
    	case Unit::KG:

        if(this->_unit == Unit::TON) return PhysicalNumber(this->_parameter+p._parameter/1000,this->_unit);
        else if(this->_unit == Unit::KG)return PhysicalNumber(this->_parameter+p._parameter,this->_unit);
        else return PhysicalNumber(this->_parameter+p._parameter*1000,this->_unit);

	case Unit::TON:

        if(this->_unit == Unit::TON) return PhysicalNumber(this->_parameter+p._parameter,this->_unit);
        else if(this->_unit == Unit::KG)return PhysicalNumber(this->_parameter+p._parameter*1000,this->_unit);
        else return PhysicalNumber(this->_parameter+p._parameter*1000000,this->_unit);

        default : throw std::invalid_argument("different dimentions");
    }
}
 if(this->_unit == Unit::SEC || this->_unit == Unit::MIN || this->_unit == Unit::HOUR){
    switch (p._unit)
    {
    	case Unit::SEC:

        if(this->_unit == Unit::MIN) return PhysicalNumber(this->_parameter+p._parameter/60,this->_unit);
        else if(this->_unit == Unit::HOUR)return PhysicalNumber(this->_parameter+p._parameter/3600,this->_unit);
        else return PhysicalNumber(this->_parameter+p._parameter,this->_unit);
        
    	case Unit::MIN:

        if(this->_unit == Unit::SEC) return PhysicalNumber(this->_parameter+p._parameter*60,this->_unit);
        else if(this->_unit == Unit::M)return PhysicalNumber(this->_parameter+p._parameter,this->_unit);
        else return PhysicalNumber(this->_parameter+p._parameter/60,this->_unit);

	case Unit::HOUR:

        if(this->_unit == Unit::HOUR) return PhysicalNumber(this->_parameter+p._parameter,this->_unit);
        else if(this->_unit == Unit::MIN)return PhysicalNumber(this->_parameter+p._parameter*60,this->_unit);
        else return PhysicalNumber(this->_parameter+p._parameter*3600,this->_unit);

        default : throw std::invalid_argument("different dimentions");
    }
}else
	throw std::invalid_argument("different dimentions");	
}
/////////////////////////////////////////////////////////////////////////////////////
    const PhysicalNumber PhysicalNumber::operator-(const PhysicalNumber& p) const{
		if(this->_unit == Unit::KM || this->_unit == Unit::M || this->_unit == Unit::CM){
    switch (p._unit)
    {
    	case Unit::CM:

        if(this->_unit == Unit::KM) return PhysicalNumber(this->_parameter-p._parameter/1000000,this->_unit);
        else if(this->_unit == Unit::M)return PhysicalNumber(this->_parameter-p._parameter/1000,this->_unit);
        else return PhysicalNumber(this->_parameter-p._parameter,this->_unit);
        
    	case Unit::M:

        if(this->_unit == Unit::KM) return PhysicalNumber(this->_parameter-p._parameter/1000,this->_unit);
        else if(this->_unit == Unit::M)return PhysicalNumber(this->_parameter-p._parameter,this->_unit);
        else return PhysicalNumber(this->_parameter-p._parameter*1000,this->_unit);

	case Unit::KM:

        if(this->_unit == Unit::KM) return PhysicalNumber(this->_parameter-p._parameter,this->_unit);
        else if(this->_unit == Unit::M)return PhysicalNumber(this->_parameter-p._parameter*1000,this->_unit);
        else return PhysicalNumber(this->_parameter-p._parameter*1000000,this->_unit);

        default : throw std::invalid_argument("different dimentions");
    }
}
     if(this->_unit == Unit::G || this->_unit == Unit::KG || this->_unit == Unit::TON){
    switch (p._unit)
    {
    	case Unit::G:

        if(this->_unit == Unit::TON) return PhysicalNumber(this->_parameter-p._parameter/1000000,this->_unit);
        else if(this->_unit == Unit::KG)return PhysicalNumber(this->_parameter-p._parameter/1000,this->_unit);
        else return PhysicalNumber(this->_parameter-p._parameter,this->_unit);
        
    	case Unit::KG:

        if(this->_unit == Unit::TON) return PhysicalNumber(this->_parameter-p._parameter/1000,this->_unit);
        else if(this->_unit == Unit::KG)return PhysicalNumber(this->_parameter-p._parameter,this->_unit);
        else return PhysicalNumber(this->_parameter- p._parameter*1000,this->_unit);

	case Unit::TON:

        if(this->_unit == Unit::TON) return PhysicalNumber(this->_parameter-p._parameter,this->_unit);
        else if(this->_unit == Unit::KG)return PhysicalNumber(this->_parameter-p._parameter*1000,this->_unit);
        else return PhysicalNumber(this->_parameter-p._parameter*1000000,this->_unit);

        default : throw std::invalid_argument("different dimentions");
    }
}
 if(this->_unit == Unit::SEC || this->_unit == Unit::MIN || this->_unit == Unit::HOUR){
    switch (p._unit)
    {
    	case Unit::SEC:

        if(this->_unit == Unit::MIN) return PhysicalNumber(this->_parameter-p._parameter/60,this->_unit);
        else if(this->_unit == Unit::HOUR)return PhysicalNumber(this->_parameter-p._parameter/3600,this->_unit);
        else return PhysicalNumber(this->_parameter-p._parameter,this->_unit);
        
    	case Unit::MIN:

        if(this->_unit == Unit::SEC) return PhysicalNumber(this->_parameter-p._parameter*60,this->_unit);
        else if(this->_unit == Unit::M)return PhysicalNumber(this->_parameter-p._parameter,this->_unit);
        else return PhysicalNumber(this->_parameter-p._parameter/60,this->_unit);

	case Unit::HOUR:

        if(this->_unit == Unit::HOUR) return PhysicalNumber(this->_parameter-p._parameter,this->_unit);
        else if(this->_unit == Unit::MIN)return PhysicalNumber(this->_parameter-p._parameter*60,this->_unit);
        else return PhysicalNumber(this->_parameter-p._parameter*3600,this->_unit);

        default : throw std::invalid_argument("different dimentions");
    }
}else
	throw std::invalid_argument("different dimentions");
	}


    PhysicalNumber PhysicalNumber::operator+=(const PhysicalNumber& p) { 

	 return this->operator+(&p); }
    PhysicalNumber PhysicalNumber::operator-=(const PhysicalNumber& p) {
	return this->operator-(p);}

    bool PhysicalNumber::operator!() const{return false;}
////////////////////////////////////////////////////////////
    bool PhysicalNumber::operator<(const PhysicalNumber& p){
		if(this->_unit == Unit::KM || this->_unit == Unit::M || this->_unit == Unit::CM){
    switch (p._unit)
    {
    	case Unit::CM:

        if(this->_unit == Unit::KM) return (this->_parameter<p._parameter/1000000);
        else if(this->_unit == Unit::M)return (this->_parameter<p._parameter/1000);
        else return (this->_parameter<p._parameter);
        
    	case Unit::M:

        if(this->_unit == Unit::KM) return (this->_parameter<p._parameter/1000);
        else if(this->_unit == Unit::M)return (this->_parameter<p._parameter);
        else return (this->_parameter < p._parameter*1000);

	case Unit::KM:

        if(this->_unit == Unit::KM) return (this->_parameter<p._parameter);
        else if(this->_unit == Unit::M)return (this->_parameter<p._parameter*1000);
        else return (this->_parameter<p._parameter*1000000);

        default : throw std::invalid_argument("different dimentions");
    }
}
     if(this->_unit == Unit::G || this->_unit == Unit::KG || this->_unit == Unit::TON){
    switch (p._unit)
    {
    	case Unit::G:

        if(this->_unit == Unit::TON) return (this->_parameter<p._parameter/1000000);
        else if(this->_unit == Unit::KG)return (this->_parameter<p._parameter/1000);
        else return (this->_parameter<p._parameter);
        
    	case Unit::KG:

        if(this->_unit == Unit::TON) return (this->_parameter<p._parameter/1000);
        else if(this->_unit == Unit::KG)return (this->_parameter<p._parameter);
        else return (this->_parameter< p._parameter*1000);

	case Unit::TON:

        if(this->_unit == Unit::TON) return (this->_parameter<p._parameter);
        else if(this->_unit == Unit::KG)return (this->_parameter<p._parameter*1000);
        else return (this->_parameter<p._parameter*1000000);

        default : throw std::invalid_argument("different dimentions");
    }
}
 if(this->_unit == Unit::SEC || this->_unit == Unit::MIN || this->_unit == Unit::HOUR){
    switch (p._unit)
    {
    	case Unit::SEC:

        if(this->_unit == Unit::MIN) return (this->_parameter<p._parameter/60);
        else if(this->_unit == Unit::HOUR)return (this->_parameter<p._parameter/3600);
        else return (this->_parameter<p._parameter);
        
    	case Unit::MIN:

        if(this->_unit == Unit::SEC) return (this->_parameter<p._parameter*60);
        else if(this->_unit == Unit::M)return (this->_parameter<p._parameter);
        else return (this->_parameter < p._parameter/60);

	case Unit::HOUR:

        if(this->_unit == Unit::HOUR) return (this->_parameter<p._parameter);
        else if(this->_unit == Unit::MIN)return (this->_parameter<p._parameter*60);
        else return (this->_parameter<p._parameter*3600);

        default : throw std::invalid_argument("different dimentions");
    }
}else
	throw std::invalid_argument("different dimentions");
	}
//////////////////////////////////////////////////////////
    bool PhysicalNumber::operator>(const PhysicalNumber& p){
    return !(this->operator<(p))&& !(this->operator==(p));
	} 
//////////////////////////////////////////////////
    bool PhysicalNumber::operator<=(const PhysicalNumber& p){

		return (this->operator<(p)|| this-> operator==(p));
		}     	
    bool PhysicalNumber::operator>=(const PhysicalNumber& p){return true;}
////////////////////////////////////////////////////////////////////////////// 
    bool PhysicalNumber::operator==(const PhysicalNumber& p){
   if(this->_unit == Unit::KM || this->_unit == Unit::M || this->_unit == Unit::CM){
    switch (p._unit)
    {
    	case Unit::CM:

        if(this->_unit == Unit::KM) return (this->_parameter==p._parameter/1000000);
        else if(this->_unit == Unit::M)return (this->_parameter==p._parameter/1000);
        else return (this->_parameter==p._parameter);
        
    	case Unit::M:

        if(this->_unit == Unit::KM) return (this->_parameter==p._parameter/1000);
        else if(this->_unit == Unit::M)return (this->_parameter==p._parameter);
        else return (this->_parameter ==p._parameter*1000);

	case Unit::KM:

        if(this->_unit == Unit::KM) return (this->_parameter==p._parameter);
        else if(this->_unit == Unit::M)return (this->_parameter==p._parameter*1000);
        else return (this->_parameter==p._parameter*1000000);

        default : throw std::invalid_argument("different dimentions");
    }
}
     if(this->_unit == Unit::G || this->_unit == Unit::KG || this->_unit == Unit::TON){
    switch (p._unit)
    {
    	case Unit::G:

        if(this->_unit == Unit::TON) return (this->_parameter==p._parameter/1000000);
        else if(this->_unit == Unit::KG)return (this->_parameter==p._parameter/1000);
        else return (this->_parameter==p._parameter);
        
    	case Unit::KG:

        if(this->_unit == Unit::TON) return (this->_parameter==p._parameter/1000);
        else if(this->_unit == Unit::KG)return (this->_parameter==p._parameter);
        else return (this->_parameter == p._parameter*1000);

	case Unit::TON:

        if(this->_unit == Unit::TON) return (this->_parameter==p._parameter);
        else if(this->_unit == Unit::KG)return (this->_parameter==p._parameter*1000);
        else return (this->_parameter==p._parameter*1000000);

        default : throw std::invalid_argument("different dimentions");
    }
}
 if(this->_unit == Unit::SEC || this->_unit == Unit::MIN || this->_unit == Unit::HOUR){
    switch (p._unit)
    {
    	case Unit::SEC:

        if(this->_unit == Unit::MIN) return (this->_parameter==p._parameter/60);
        else if(this->_unit == Unit::HOUR)return (this->_parameter==p._parameter/3600);
        else return (this->_parameter==p._parameter);
        
    	case Unit::MIN:

        if(this->_unit == Unit::SEC) return (this->_parameter==p._parameter*60);
        else if(this->_unit == Unit::M)return (this->_parameter==p._parameter);
        else return (this->_parameter == p._parameter/60);

	case Unit::HOUR:

        if(this->_unit == Unit::HOUR) return (this->_parameter==p._parameter);
        else if(this->_unit == Unit::MIN)return (this->_parameter==p._parameter*60);
        else return (this->_parameter==p._parameter*3600);

        default : throw std::invalid_argument("different dimentions");
    }
}else
	throw std::invalid_argument("different dimentions");
}
    ostream& operator<<(ostream& os, const PhysicalNumber& p){
	switch(p._unit){
	case Unit::KM : return os <<p._parameter<<"[km]"<<endl ;
	case Unit::M :return os <<p._parameter<<"[m]"<<endl ; 
	case Unit::CM :return os <<p._parameter<<"[cm]"<<endl ; 
	case Unit::G :return os <<p._parameter<<"[g]"<<endl ; 
	case Unit::KG :return os <<p._parameter<<"[kg]"<<endl ; 
	case Unit::TON :return os <<p._parameter<<"[ton]"<<endl;
	case Unit::SEC :return os <<p._parameter<<"[sec]"<<endl;
	case Unit::MIN :return os <<p._parameter<<"[min]"<<endl;
	case Unit::HOUR:return os <<p._parameter<<"[hour]"<<endl;
	}
	}
    istream&  operator>> (istream& is, PhysicalNumber& p){
	is >> p._parameter;
        return is;
	}


    
    PhysicalNumber PhysicalNumber::operator++(){return PhysicalNumber(2,Unit::KM);}
    const PhysicalNumber PhysicalNumber::operator++(int postfix){return PhysicalNumber(2,Unit::KM);}
    PhysicalNumber PhysicalNumber::operator--(){return PhysicalNumber(2,Unit::KM);}
    const PhysicalNumber PhysicalNumber::operator--(int postfix){return PhysicalNumber(2,Unit::KM);}





};

