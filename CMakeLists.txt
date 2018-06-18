cmake_minimum_required(VERSION 3.10)
project(jampioshared)
list(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_LIST_DIR}/cmake)
include(CheckTypeSize)
check_type_size("void*" CMAKE_SIZEOF_VOID_P)
message(STATUS "sizeof void*: " ${CMAKE_SIZEOF_VOID_P})
message(STATUS "CMAKE_CROSSCOMPILING: " ${CMAKE_CROSSCOMPILING})
message(STATUS "CMAKE_SYSTEM_PROCESSOR: " ${CMAKE_SYSTEM_PROCESSOR})
message(STATUS "CMAKE_LIBRARY_ARCHITECTURE: " ${CMAKE_LIBRARY_ARCHITECTURE})
add_library(jampioshared STATIC src/math.c src/shared.c)
#target_include_directories(jampioshared PUBLIC
#	$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
#	$<INSTALL_INTERFACE:include>
#)
# custom install enforces lib/<arch> on certain systems
if(USE_CUSTOM_INSTALL)
	include(GNUInstallDirsCustom)
else()
	include(GNUInstallDirs)
endif()
install(TARGETS jampioshared EXPORT jampiosharedConfig DESTINATION ${CMAKE_INSTALL_LIBDIR})
install(DIRECTORY src/ DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/jampio/shared FILES_MATCHING PATTERN "*.h")
install(EXPORT jampiosharedConfig DESTINATION ${CMAKE_INSTALL_LIBDIR}/jampioshared)