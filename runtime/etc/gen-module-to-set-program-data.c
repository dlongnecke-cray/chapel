#include "chpl-program-registration.h"
#include <stdio.h>

//
// TODO: Figure out how to wire this up into the build pipeline.
//

static void expand_constant(const char* name) {
  printf("extern type %s_type;\n", name);
  printf("extern const %s: %s_type;\n", name, name);
  printf("info.setConstant(\'%s\', %s);\n", name, name);
}

static void expand_callback(const char* name) {
  printf("info.setCallback(\'%s\');\n", name);
}

static void print_module_code(void) {
  #define STR(x__) #x__
  #define E_CONSTANT(name__, type__) expand_constant(STR(name__));
  #define E_CALLBACK(name__) expand_callback(STR(name__));
  #include "chpl-program-data-macro-adapter.h"
  #undef STR
}

int main() {
  print_module_code();
  return 0;
}
