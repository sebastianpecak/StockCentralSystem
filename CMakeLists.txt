# CMakeList.txt : Top-level CMake project file, do global configuration
# and include sub-projects here.
#
cmake_minimum_required (VERSION 3.8)

project ("StockCentralSystem")

# Include sub-projects.
add_subdirectory ("StockCentralSystem")
add_subdirectory ("CommonObjects")
add_subdirectory ("Currencies")
add_subdirectory ("Securities")
add_subdirectory ("Derivatives")
add_subdirectory ("FutureContracts")
add_subdirectory ("Options")
