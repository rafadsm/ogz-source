cmake_minimum_required(VERSION 3.0)

enable_testing()

list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_LIST_DIR}/cmake")

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

set(CMAKE_INSTALL_PREFIX "${CMAKE_CURRENT_LIST_DIR}/../install")

include(macros)

ucm_set_runtime(STATIC)
ucm_add_flags(/Zi)
ucm_add_linker_flags(EXE CONFIG Release /DEBUG /OPT:REF /OPT:ICF)

ucm_add_linker_flags(/ignore:4099 /ignore:4221)
ucm_add_flags(-D_WINSOCK_DEPRECATED_NO_WARNINGS -D_CRT_SECURE_NO_WARNINGS)

add_project_subdir(sdk/zlib)

set(LIBSODIUM_INCLUDE_DIRS "${CMAKE_CURRENT_LIST_DIR}/sdk/libsodium/include")
add_project_subdir(sdk/libsodium)

set(LIBSQLITE3_INCLUDE_DIR "${CMAKE_CURRENT_LIST_DIR}/sdk/sqlite/include")
add_project_subdir(sdk/sqlite)

add_project_subdir(sdk/rapidxml)
add_project_subdir(sdk/ini)

add_project_subdir(sdk/bullet)
add_project_subdir(sdk/portaudio)
add_project_subdir(sdk/opus)

set(UCM_UNITY_BUILD ON)

add_project_subdir(cml)
add_project_subdir(CSCommon)
add_project_subdir(RealSpace2)
add_project_subdir(SafeUDP)
add_project_subdir(Locator)
add_project_subdir(MatchServer)

add_project_subdir(Mint2)
add_project_subdir(RealSound)
add_project_subdir(Gunz)
add_project_subdir(PartsIndexer)
