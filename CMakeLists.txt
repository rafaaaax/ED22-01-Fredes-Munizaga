cmake_minimum_required(VERSION 3.0.0)
project(taller VERSION 0.1.0)

include(CTest)
enable_testing()

find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})

#Rutas ejecutables para comentar ´#´ y borrar para alternar rutas
 add_executable(taller src/main.cpp)
 #add_executable(taller src/detectPeopleSimple.cpp)
# add_executable(taller src/Detector.cpp src/detectPeople.cpp)
# add_executable(taller src/detectPeople.cpp)
# add_executable(taller src/Persona.cpp)

target_link_libraries(taller ${OpenCV_LIBS})

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
