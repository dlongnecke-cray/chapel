proc main() {
  use ChapelProgramRegistration;
  for loc in Locales do on loc {
    // TODO: For now, prepare manually. Later, this will happen for us.
    chpl_prepareProgramInfoHere();
    chpl_programInfoHere.dump(showAddresses=false);
  }
}
