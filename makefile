exe:=GradeBookTest.exe
obj:=main.o GradeBook.o

$(exe):$(obj)
	gcc -lstdc++ -o $(exe) $(obj)
main.o:main.cpp GradeBook.h
	gcc -lstdc++ -c main.cpp
GradeBook.o:GradeBook.cpp GradeBook.h
	gcc -lstdc++ -c GradeBook.cpp
.PHONY:clean
clean:
	rm $(exe) $(obj)
