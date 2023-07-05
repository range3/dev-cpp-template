#include <devcpp_template/version.h>
#include <fmt/core.h>

#include <cxxopts.hpp>
#include <devcpp_template/say_hello.hpp>

int main(int argc, char const *argv[]) {
  fmt::print("Hello {}! version: \n", "world", DEVCPP_TEMPLATE_VERSION);
  say_hello();
  return 0;
}
