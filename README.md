# Physical_Number_Conversion

## physicalnumber.cpp

this file is the main code, its contain constructor, input and output methods, and aritmethic methods:

1. unary operators. the methods "operator +" "operator -" overloads the mathematical signs - and +,
any physical number with those signs will automaticly consider positive or negative.

2. addition and Subtraction. the methods "operator +" "operator -" with parameters, overloads the mathematical signs - and +,
using this signs with another physical number will create new number, considering the units of the physical number.
 only same types of numbers can use this methods. attempting this method with to diffrent types will cause an exception.
 
3. addition and Subtraction to current physical numer. the methods "operator +=" "operator -=" with parameters, overloads the mathematical signs -= and +=, using this signs with another physical number will change the current physical number to the result of the arithmathic calculation. only same types of numbers can use this methods. attempting this method with to diffrent types will cause an exception.

4. not sign. the operaor! overload the sign "!", any time this sign will be used near to mathematical number, the method
return true if the number equals 0 and false otherwise.

5. comparison signs. the methods operator < , operator > , operator <= and operaor >= overloads those signs, and returning true if the current number and the given  number will confirm the comparison, and false otherwise. only same types of numbers can use this methods. attempting this method with to diffrent types will cause an exception.

6. equal sign. the method operaor == overload the sign ==. this method comparing two physical number. if the numbers are equal 
the method return true, false otherwise. only same types of numbers can use this methods. attempting this method with to diffrent types will cause an exception.

7. increasing and decreasing operators. the methods "operator ++" "operator --" overloads the mathematical signs -- and +=,
any physical number with those signs will automaticly increase or decrease his amount by one.

8. increasing and decreasing operators . the methods "operator ++" "operator --" with parameters overloads the mathematical signs -- and +=, any physical number with those signs will automaticly increase or decrease his amount by one. the numbers will be change after the  method return the numbers.

9. unequal. the method operator != checking the equivalent between two number. the method using the == operator, and return the opposite result.

10. input and output operators. the method operator >> and operator << overload the sgns << and >>, with parameter . when the those signs are in use, the input method create new physical number, and the output method printing the number on the screen.
