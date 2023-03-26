import 'dart:io';

void main(List<String> arguments) {
  var l = [4, 5, 6, 7, 2, 1, 2, 3, 4];
  for (var i = 0; i < l.length; i++) {
    var e = l[i];
    print('index: $i, elem: $e');
  }
}
