cmake_minimum_required(VERSION 3.10)
project(Sinsy_Engine)

########################################################################################

# Get all files inside source for engine
file(GLOB SRC
	"sinsy.cpp" )
	
#########LINKING LIB AREA###############################################################

file(GLOB SINSY
	"lib")
		
#file(GLOB ANGELSCRIPT
#	"Dependencies/AngelScript/lib")
    
#file(GLOB LUASCRIPT
#	"Dependencies/LuaScript/lib")
########################################################################################

##### Remorse Team Lib
#add_library(REMORSE_MATH ${LIB})

##### SFML Lib
include_directories("../include")
include_directories("../lib")


link_directories(${SINSY})
#link_directories(${ANGELSCRIPT})
#link_directories(${LUASCRIPT})

# Set project output path, so it won't defaulted into project.
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/../bin)

########################################################################################

# executeable that use the libraries, with it own source file in a different directory
add_executable(${PROJECT_NAME} ${SRC})

# set startup project inside solution
set_property(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY VS_STARTUP_PROJECT ${PROJECT_NAME})

# PROJECT now links against libs and has its include directories set correctly
target_link_libraries(${PROJECT_NAME} 
                        winmm.lib
                        HTS.lib
						Sinsy.lib
						)

# remove ZERO_CHECK solution because i hate it
set(CMAKE_SUPPRESS_REGENERATION true)

