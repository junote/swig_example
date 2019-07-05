import example


obj = example.Example()
obj.say_hello()

ret = obj.add(3,4)
print(ret)

ret = obj.sub(7,4)
print(ret)


ret = obj.negateint(4)
print(ret)

rc, len = obj.strLen("hello,swig")
print("rc =",rc,"len = ", len)
