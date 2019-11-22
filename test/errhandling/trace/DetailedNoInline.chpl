//
//
//

proc callThrowing0() throws {
  try callThrowing1(); 
}

proc callThrowing1() throws {
  try callThrowing2();
}

proc callThrowing2() throws {
  try callThrowing3();
}

proc callThrowing3() throws {
  try willThrow();
}

proc willThrow() throws {
  throw new owned
    IllegalArgumentError("Throwing an error!");
}


try! callThrowing0();
