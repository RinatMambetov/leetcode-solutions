// strings
let length = text.length;

// A safer way to break up a string, is to use string addition:
document.getElementById("demo").innerHTML = "Hello " + "Dolly!";

// The \ method is not the preferred method. It might not have universal support.
// Some browsers do not allow spaces behind the \ character.

// When using the === operator, x and y are not equal:
let x = "John";
let y = new String("John");

let _x = new String("John");
let _y = new String("John");
(_x == _y); // false
(_x === _y); // false
// Comparing two JavaScript objects always returns false.

// String length
// String slice()
// String substring()
// String substr()
// String replace()
// String replaceAll()
// String toUpperCase()
// String toLowerCase()
// String concat()
// String trim()
// String trimStart()
// String trimEnd()
// String padStart()
// String padEnd()
// String charAt()
// String charCodeAt()
// String split()

let text = "Apple, Banana, Kiwi";
let part = text.slice(-12, -6); // Banana

// substring() is similar to slice().
// The difference is that start and end values less than 0 are treated as 0 in substring().

// substr() is similar to slice().

let _text = "Please visit Microsoft!";
let newText = _text.replace("Microsoft", "W3Schools");
// The replace() method does not change the string it is called on.
// The replace() method returns a new string.
// The replace() method replaces only the first match
// If you want to replace all matches, use a regular expression with the /g flag set.

// To replace case insensitive, use a regular expression with an /i flag (insensitive):
let _newText = text.replace(/MICROSOFT/i, "W3Schools");
// Regular expressions are written without quotes.

// To replace all matches, use a regular expression with a /g flag (global match):
let __newText = text.replace(/Microsoft/g, "W3Schools");

text = text.replaceAll("cats", "dogs");
text = text.replaceAll(/cats/g, "dogs");
// replaceAll() does not work in Internet Explorer.

text2 = text1.toUpperCase();
text2 = text1.toLowerCase();

let text1 = "Hello";
let text2 = "World";
let text3 = text1.concat(" ", text2);

// Strings are immutable: Strings cannot be changed, only replaced.

text2 = text1.trim();
text2 = text1.trimStart();
text2 = text1.trimEnd();

text = "5";
let padded = text.padStart(4, "0"); // 0005

let numb = 5;
text = numb.toString();

// padStart() padEnd() is not supported in Internet Explorer.

text = "5";
padded = text.padEnd(4, "0"); // 5000

// There are 3 methods for extracting string characters:
// charAt(position)
// charCodeAt(position)
// Property access [ ]

text = "HELLO WORLD";
let char = text.charAt(0); // H
char = text.charCodeAt(0); // 72

// Property access might be a little unpredictable:
// It makes strings look like arrays (but they are not)
// If no character is found, [ ] returns undefined, while charAt() returns an empty string.
// It is read only. str[0] = "A" gives no error (but does not work!)

text[0] = "A"; // Gives no error, but does not work

// If the separator is "", the returned array will be an array of single characters:
const arr = text.split("");


// String Search Methods
// String indexOf()
// String lastIndexOf()
// String search()
// String match()
// String matchAll()
// String includes()
// String startsWith()
// String endsWith()

// The indexOf() method returns the index (position) the first occurrence of a string in a string
// The lastIndexOf() method returns the index of the last occurrence of a specified text in a string
// Both indexOf(), and lastIndexOf() return -1 if the text is not found
// Both methods accept a second parameter as the starting position for the search
let index = text.indexOf("locate", 15);

// The search() method searches a string for a string (or a regular expression) and returns the position of the match
text.search(/locate/);

// The search() method cannot take a second start position argument.
// The indexOf() method cannot take powerful search values (regular expressions).

// The match() method returns an array containing the results of matching a string against a string (or a regular expression).
// Perform a global, case-insensitive search for "ain":
text.match(/ain/gi);

// The matchAll() method returns an iterator containing the results of matching a string against a string (or a regular expression).
const iterator = text.matchAll(/Cats/gi);

// The includes() method returns true if a string contains a specified value.
// Otherwise it returns false.
text.includes("world", 12);

text.startsWith("Hello"); // true
text.startsWith("world", 5);
text.endsWith("world", 11);

// Template Literals use back-ticks (``) rather than the quotes ("") to define a string:
let text = `Hello World!`;
let text =
`The quick
brown fox
jumps over
the lazy dog`;

let firstName = "John";
let lastName = "Doe";
let text = `Welcome ${firstName}, ${lastName}!`;

let total = `Total: ${(price * (1 + VAT)).toFixed(2)}`;

// HTML Templates
let header = "Templates Literals";
let tags = ["template literals", "javascript", "es6"];

let html = `<h2>${header}</h2><ul>`;
for (const x of tags) {
  html += `<li>${x}</li>`;
}

html += `</ul>`;

