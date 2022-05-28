file(GLOB src
    "Include/*.h"
    "source/*.cpp"
    "source/*.c"
)

add_target(NAME cml TYPE STATIC SOURCES "${src}")

target_include_directories(cml PUBLIC
	.
	Include
	../sdk/zlib/include
	../sdk/rapidxml/include
	../sdk/rapidjson/include
)


if (WIN32)
	target_link_libraries(cml PUBLIC
		rpcrt4.lib
	)
endif()

if (UNIX)
	target_include_directories(cml PUBLIC ../sdk/pevents/src)
	target_link_libraries(cml PUBLIC pthread pevents)
endif()


target_link_libraries(cml PUBLIC
	zlib
)