use Lists;

//
// Initialize an empty list.
//
{
  var lst: list(int, parSafe=true);
  assert(lst.size == 0);
  for x in lst do
    halt("Should never reach here.");
}

//
// Initialize a list from an array.
//
{
  var someList: list(int, true);
  for i in 1..8 do
    someList.append(i);
  var lst: list(someList, true);
}

