from distutils.core import setup, Extension

module1 = Extension( 
	'my_hash', # module name in interpreter
	sources = ['hash.c'] 
)

setup( 
	name = 'my_hash',
	version = '1.1',
	description = 'Simple module',
	ext_modules= [module1]
)