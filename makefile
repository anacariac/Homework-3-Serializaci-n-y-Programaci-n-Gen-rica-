ejercicio1:
	g++ ejercicio_1/examples/main.cpp ejercicio_1/src/*.cpp -Wall -Iejercicio_1/includes -o ejercicio1.exe
	valgrind ./ejercicio1.exe
	
ejercicio2:
	g++ ejercicio_2/example/main.cpp ejercicio_2/src/*.cpp -Wall -Iejercicio_2/includes -o ejercicio2.exe
	valgrind ./ejercicio2.exe

ejercicio3:
	g++ ejercicio_3/example/main.cpp ejercicio_3/src/*.cpp -Wall -Iejercicio_3/includes -o ejercicio3.exe
	valgrind ./ejercicio3.exe

