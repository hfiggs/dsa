add_library(dsa)
target_sources(
  dsa
  PRIVATE linked_list.cpp
  PUBLIC ${HEADER_LIST})
