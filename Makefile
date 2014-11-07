GCC = g++
CFLAGS = -O3 -march=native 

all: hello matrix pointer templates template_metaprogramming

hello: hello.cpp
	$(GCC) $(CFLAGS) hello.cpp -o hello 

matrix: matrix.cpp
	$(GCC) $(CFLAGS) matrix.cpp -o matrix 

pointer: pointer.cpp
	$(GCC) $(CFLAGS) pointer.cpp -o pointer 

templates: templates.cpp
	$(GCC) $(CFLAGS) templates.cpp -o templates 

template_metaprogramming: template_metaprogramming.cpp
	$(GCC) $(CFLAGS) template_metaprogramming.cpp -o template_metaprogramming

clean:
	rm -f *.s
	rm -f *~
	rm -f hello matrix pointer templates template_metaprogramming 

