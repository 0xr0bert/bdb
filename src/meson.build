boost_dep = dependency('boost')

bdb_srcs = [
    'bdb.cpp',
    'behaviour.cpp',
    'named.cpp',
    'uuidd.cpp'
]
bdb = library(
    'bdb',
    bdb_srcs,
    include_directories : inc,
    dependencies : boost_dep
)