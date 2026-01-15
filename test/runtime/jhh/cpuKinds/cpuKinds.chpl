// This is a file used to create a Chapel library. Its main purpose
// is to provide access into the runtime. Because the C test which
// uses it sets up the runtime in a granular way rather than by calling
// 'chpl_library_init', this file exposes a proc to set up the program
// info before the rest of setup (or else all the other calls made may
// break).

export proc setupProgramInfoHereManually() {
  use ChapelProgramRegistration;
  ref prgHere = chpl_programInfoHere;
  prgHere.registerAsRoot();
}
