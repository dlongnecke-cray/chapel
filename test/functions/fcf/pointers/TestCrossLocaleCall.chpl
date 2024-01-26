use CTypes;

proc call(p: proc(): void) {
  // const ptr = p:c_ptr(void); // TODO: Support casts. Why don't they work?
  // TODO: Support printing the function pointer (no wrapper class anymore).
  writeln('Invoking from locale ', here);
  p();
}

proc main() {
  const p = proc() { writeln('Hello world from locale: ', here); };
  for loc in Locales do on loc {
    call(p);
  }
}
