#!make -f

all: test
	./$<

demo: PhysicalNumberDemo.o PhysicalNumber.o
	clang++-5.0 -std=c++17 $^ -o demo

test: PhysicalNumberTest.o PhysicalNumber.o
	clang++-5.0 -std=c++17 $^ -o test

%.o: %.cpp
	clang++-5.0 -std=c++17 --compile $< -o $@

PhysicalNumber.o: PhysicalNumber.h 

<<<<<<< HEAD
PhysicalNumberDemo.o: PhysicalNumber.h
=======
PhysicalNumberDemo.o: PhysicalNumber.h 
>>>>>>> d0e3a8c0a2f7e980f0fe790fd385166d58df0477

<<<<<<< HEAD
PhysicalNumberTest.o: PhysicalNumber.h badkan.hpp
=======
PhysicalNumberTest.o: PhysicalNumber.h badkan.hpp
>>>>>>> cfea6b9bdfbf285c8f4db5c571682710d983533b

clean:
	rm -f *.o demo test
