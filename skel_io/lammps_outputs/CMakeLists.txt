
cmake_minimum_required(VERSION 3.10)

# set the project name
project(skel_lammps LANGUAGES C CXX VERSION 1.0)

set(CMAKE_BUILD_TYPE Release)

find_package(MPI REQUIRED)
find_package(ADIOS2 REQUIRED)

add_definitions(-DOMPI_SKIP_MPICXX)

add_executable(skel_lammps skel_lammps.cxx 
	rank00000.cxx
	rank00001.cxx
	rank00002.cxx
	rank00003.cxx
)

add_executable(create_synthetic_data create_synthetic_data.cxx)

target_link_libraries(skel_lammps mpi adios2::cxx11_mpi) 
#target_link_libraries(skel_lammps mpi adios2) 

