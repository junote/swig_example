from distutils.core import setup, Extension

example_module = Extension('_example',
    sources=['example.cpp', 'example_wrap.cxx',],
)
setup (
    name = 'example',
    version = '0.1',
    author = "junote",
    description = """Simple swig C\+\+/Python example""",
    ext_modules = [example_module],
    py_modules = ["example"],
)