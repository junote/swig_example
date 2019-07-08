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

# http://www.swig.org/Doc3.0/Library.html#Library_carrays
a = example.new_intArray(10)
for i in range(10):
    example.intArray_setitem(a, i, i)
print("a[3] = ", example.intArray_getitem(a,3))
tmp = obj.sumArr(a,10)
print(tmp)
example.delete_intArray(a)

a = example.intArrayclass(10)
for i in range(10):
    a[i] = i * 10
tmp = obj.sumArr(a,10)
print(tmp)
print(a[3])


tmp = obj.count('e','hello',5)
print(tmp)

tmp = example.Point()
# print(tmp.a, tmp.b, tmp.c)
rc,tmp  = obj.doublePointer()
print(rc)
print(tmp.x, tmp.y, tmp.z)
