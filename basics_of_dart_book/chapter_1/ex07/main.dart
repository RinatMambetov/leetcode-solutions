import 'dart:io';

void main(List<String> arguments) {
  var l = [4, 5, 6, 7, 2, 1, 2, 3, 4];
  for (var element in l.reversed) {
    stdout.write('$element ');
  }
}
