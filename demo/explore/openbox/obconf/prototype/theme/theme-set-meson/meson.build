project('theme-set', 'c',
	version: '0.1',
	meson_version: '>= 0.44.0',
	license: 'MIT'
)

dep_gtk = dependency('gtk+-3.0')
dep_obt = dependency('obt-3.5')

executable('demo',
	[
		'main.c',
		'tree.c'
	],
	dependencies : [
		dep_gtk,
		dep_obt
	]
)
