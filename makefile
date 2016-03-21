hw2:lab2main.o BMI.o
	g++ -o hw2 lab2main.o BMI.o

BMI.o:BMI.cpp BMI.h
	g++ -c BMI.cpp

lab2main.o:lab2main.cpp BMI.h
	g++ -c lab2main.cpp

clean:
	rm hw2 *.o
