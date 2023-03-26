void main(List<String> arguments) {
  var l1 = [];
  for (var i = 0; i < 100; i++) {
    l1.add(i);
  }
  var l2 = List.generate(100, (index) => index);
  print(l1);
  print(l2);
}
