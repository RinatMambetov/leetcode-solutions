void main(List<String> arguments) {
  var l = List.generate(100, (index) => index);
  var res = [
    for (var i in l)
      if (i % 5 == 0) i
  ];
  print(res);
}
