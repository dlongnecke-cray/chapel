/*
  we can always check this against the corresponding python3 script:

    with open('UTF8-test.txt', 'rb') as f:
        for l in f:
            b = bytes(l).decode(errors='replace')
            print(b, end='')
    print()
*/


use IO;

var f = open("UTF8-test.txt", mode=ioMode.rw);
var chan = f.reader(locking=false);

var b: bytes;
while chan.readAll(b) {
  writeln(b.decode(policy=decodePolicy.replace));
}
chan.close();
f.close();
