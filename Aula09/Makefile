GCC = g++
GCC_FLAGS = -I include -std=c++11
PROGRAMA = diary

$(PROGRAMA): App.o Date.o Diary.o main.o Others.o Time.o
	$(GCC) $(GCC_FLAGS) -o $(PROGRAMA) App.o Date.o Diary.o main.o Others.o Time.o

App.o: src/App.cpp
	$(GCC) $(GCC_FLAGS) -c src/App.cpp

Date.o: src/main.cpp
	$(GCC) $(GCC_FLAGS) -c src/Date.cpp

Diary.o: src/Diary.cpp
	$(GCC) $(GCC_FLAGS) -c src/Diary.cpp

main.o: src/main.cpp
	$(GCC) $(GCC_FLAGS) -c src/main.cpp

Others.o: src/Others.cpp
	$(GCC) $(GCC_FLAGS) -c src/Others.cpp

Time.o: src/Time.cpp
	$(GCC) $(GCC_FLAGS) -c src/Time.cpp