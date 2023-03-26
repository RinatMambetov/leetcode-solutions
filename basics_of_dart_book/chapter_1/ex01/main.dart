import 'dart:io';

void main(List<String> arguments) {
  var str =
      'Представим ситуацию, что у нас имеется вложенный цикл (цикл в цикле).';
  var s = str.split('').toSet();
  var m = {for (var element in s) element: 0};
  for (var element in str.split('')) {
    m.update(element, (value) => ++value);
  }
  print(m);
}
