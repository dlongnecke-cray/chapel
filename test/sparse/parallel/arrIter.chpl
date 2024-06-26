config var n = 9;

const D = {1..n, 1..n};
var DSps: sparse subdomain(D) = [(i,j) in D] if (((i+j)%4) == 0) then (i,j);

var ASps: [DSps] real;

forall (i,j) in DSps with (ref ASps) do
  ASps(i,j) = i + j/10.0;

writeln("ASps elements:");
for e in ASps do write(e, " ");
writeln();

forall e in ASps do e = -e;

writeln("ASps elements:");
for e in ASps do write(e, " ");
writeln();
