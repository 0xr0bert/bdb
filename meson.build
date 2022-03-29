project(
    'bdb',
    'cpp',
    default_options: ['cpp_std=c++20'],
    version: '0.0.1',
    license: 'GPL-3.0-or-later'
)

add_global_arguments('-DBDB_VERSION="@0@"'.format(meson.project_version()), language : 'cpp')
add_global_arguments('-DBDB_NAME="BDB"', language : 'cpp')

inc = include_directories('include')

subdir('include')
subdir('src')
subdir('test')