py:
	swig -c++ -python -py3 example.i
so:
	g++ -fPIC -I/usr/include/python3.6/ -lstdc++ -shared -o _example.so example.cpp example_wrap.cxx 
pypy:
	python3 setup.py build_ext --inplace
clean:
	rm *.so *.cxx 
	rm __pycache__ -rf
	rm build -rf
	rm example.py
