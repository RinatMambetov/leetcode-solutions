List maxmin(var a, var b, var c) {
  List res = [];

  var max = c;
  if (a > b && a > c)
    max = a;
  else if (b > a && b > c) max = b;
  res.add(max);

  var min = c;
  if (a < b && a < c)
    min = a;
  else if (b < a && b < c) min = b;
  res.add(min);

  return res;
}

void main(List<String> arguments) {
  print(maxmin(-1, 0, 1));
  print(maxmin(-1, 10, 1));
  print(maxmin(-1, 10, -100));
}
