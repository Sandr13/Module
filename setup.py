from distutils.core import setup, Extension

module1 = Extension(
	'pmath', # название модуля внутри Python
	 sources = ['main.c', 'cFuncs.c'] # Исходные файлы модуля
)

setup(
	name = 'pmath',              # название модуля (my_plus.__name__)
	version = '1.0',               # версия модуля
	description = 'Simple module', # описание модуля
	ext_modules= [module1]         # объекты типа Extension (мы объявили его выше)
)