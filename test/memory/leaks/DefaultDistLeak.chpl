use BlockDist;
use LayoutCS;

config const N = 10;
const ParentDom = {7..#2*N align 1, 17..#3*N align 5}
  dmapped Block({7..#2*N, 17..#3*N});

// This was originally "const"/"unmanaged".
var layout = new DefaultDist();

var sdom: sparse subdomain (ParentDom) dmapped new dmap(layout);
var sarr: [sdom] int;

