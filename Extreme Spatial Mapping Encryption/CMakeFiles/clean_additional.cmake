# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\SpatialMappingEncryption_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\SpatialMappingEncryption_autogen.dir\\ParseCache.txt"
  "SpatialMappingEncryption_autogen"
  )
endif()
