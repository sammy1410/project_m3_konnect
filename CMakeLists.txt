cmake_minimum_required(VERSION 3.20)
project(occ_test)
set(CMAKE_CXX_STANDARD 17)

find_package(OpenCASCADE CONFIG REQUIRED)

add_executable(occ_test main.cpp)
target_link_options(occ_test PRIVATE -static-libgcc -static-libstdc++)
target_link_libraries(occ_test PRIVATE
    TKernel TKMath TKG2d TKG3d TKGeomBase TKBRep TKGeomAlgo TKTopAlgo TKPrim TKBO TKBool TKFillet TKOffset TKMesh)
