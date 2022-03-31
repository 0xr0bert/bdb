gtest_proj = subproject('gtest')
gtest_main_dep = gtest_proj.get_variable('gtest_main_dep')
gmock_dep = gtest_proj.get_variable('gmock_dep')

bdb_test_srcs = [
    'bdb.cpp',
    'behaviour.cpp',
    'named.cpp'
]

bdb_test = executable(
    'bdb_test',
    bdb_test_srcs,
    dependencies : [gtest_main_dep, gmock_dep],
    include_directories : inc,
    link_with : bdb
)
test('gtest test', bdb_test)