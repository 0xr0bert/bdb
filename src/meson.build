boost_dep = dependency('boost')

bdb_srcs = [
    'bdb.cpp',
    'behaviour.cpp'
]
bdb_so = shared_library(
    'bdb',
    bdb_srcs,
    include_directories : inc,
    dependencies : boost_dep
)
bdb_a = static_library(
    'bdb',
    bdb_srcs,
    include_directories : inc,
    dependencies : boost_dep
)