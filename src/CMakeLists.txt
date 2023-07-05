set(EXE_TARGET_NAME devcppexe)

set(${EXE_TARGET_NAME}_SRC # cmf: sortable
                           main.cpp
)

add_executable(${EXE_TARGET_NAME})
target_sources(${EXE_TARGET_NAME} PRIVATE ${${EXE_TARGET_NAME}_SRC})
target_compile_features(${EXE_TARGET_NAME} PUBLIC cxx_std_20)
set_target_properties(${EXE_TARGET_NAME} PROPERTIES CXX_EXTENSIONS OFF)

target_link_libraries(
  ${EXE_TARGET_NAME}
  PRIVATE Threads::Threads
          cxxopts::cxxopts
          fmt::fmt
          nlohmann_json::nlohmann_json
          ${PROJECT_NAME}::${PROJECT_NAME}
  # PkgConfig::Libpmem2
)

install(TARGETS ${EXE_TARGET_NAME} DESTINATION "${CMAKE_INSTALL_BINDIR}")
