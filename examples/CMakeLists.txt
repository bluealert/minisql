add_executable(ex0 ex0.cpp)
target_link_libraries(ex0 minisql ${Boost_LIBRARIES} ${Glog_LIBRARIES} ${GPERFTOOLS_TCMALLOC})

add_executable(ex1 ex1.cpp)
target_link_libraries(ex1 minisql ${Boost_LIBRARIES} ${Glog_LIBRARIES} ${GPERFTOOLS_TCMALLOC})