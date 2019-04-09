#include <iostream>
using namespace std;


namespace ariel {
enum class Unit{
CM,M,KM,SEC,MIN,HOUR,G,KG, TON
};

class PhysicalNumber {
    
    private:
	double _parameter;	
	Unit _unit ;


    public:
    PhysicalNumber(double parameter,Unit unit);
    
    //unary operators
    const PhysicalNumber operator+()const;
    const PhysicalNumber operator-()const;
    
    
    const PhysicalNumber operator+(const PhysicalNumber& other);
    const PhysicalNumber operator-(const PhysicalNumber& other) const;


    PhysicalNumber operator+=(const PhysicalNumber& other) ;
    PhysicalNumber operator-=(const PhysicalNumber& other) ;

    bool operator!() const;
    bool operator<(const PhysicalNumber& p);
    bool operator>(const PhysicalNumber& p);
    bool operator<=(const PhysicalNumber& p);     	
    bool operator>=(const PhysicalNumber& p); 
    bool operator==(const PhysicalNumber& p);


    

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
