set(MAINFILE main.cpp)

include_directories(${PROJECT_SOURCE_DIR}/include)

add_executable (mainfile ${MAINFILE})

target_link_libraries(mainfile LIBRARY)

install(TARGETS mainfile DESTINATION ${PROJECT_SOURCE_DIR}/bin)
