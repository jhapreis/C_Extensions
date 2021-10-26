from distutils.core import setup, Extension
 
module = Extension(
    'myModule', # name of the .os Python file
    sources = ['myModule.c', 'functions.c'], # will have a compilation as .o files
    include_dirs=['usr/include/', 'usr/local/include'] # directories to includes on C
    )

setup (
    name        = 'PackageName',
    version     = '1.0.1',
    description = 'This is a package for myModule',
    ext_modules = [module]
    )

# run on the terminal:
#   
#     python3 setup.py build
#
# find the path for the module or move to the root folder and execute teste.py
