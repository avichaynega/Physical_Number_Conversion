#include <iostream>
#include "Unit.h"
using namespace std;



namespace ariel {


class PhysicalNumber {
    
    private:
	double _parameter;	
	Unit _unit ;


    public:
    PhysicalNumber(double parameter,Unit unit);
    
    //unary operators
    const PhysicalNumber operator+()const;
    const PhysicalNumber operator-()const;
    
    
    const PhysicalNumber operator+(const PhysicalNumber& other)const;
    const PhysicalNumber operator-(const PhysicalNumber& other) const;


    PhysicalNumber operator+=(const PhysicalNumber& other) ;
    PhysicalNumber operator-=(const PhysicalNumber& other) ;

    bool operator!() const;
    bool operator<(const PhysicalNumber& p) const;
    bool operator>(const PhysicalNumber& p)const;
    bool operator<=(const PhysicalNumber& p);     	
    bool operator>=(const PhysicalNumber& p); 
    bool operator==(const PhysicalNumber& p)const;


    

    PhysicalNumber operator++();
    const PhysicalNumber operator++(int dummy_flag_for_postfix_increment) ;
    PhysicalNumber operator--();
    const PhysicalNumber operator--(int dummy_flag_for_postfix_increment) ;
    

    
    friend bool operator==(const PhysicalNumber& c1, const PhysicalNumber& c2);
    friend bool operator!=(const PhysicalNumber& c1, const PhysicalNumber& c2);
    
    friend ostream& operator<< (ostream& os, const PhysicalNumber& c);
   friend istream& operator>> (istream& is, PhysicalNumber& c);
    



};


};
