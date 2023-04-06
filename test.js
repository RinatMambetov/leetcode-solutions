const cars = ["Saab", "Volvo", "BMW"];
const _cars = new Array("Saab", "Volvo", "BMW");

// For simplicity, readability and execution speed, use the array literal method.

// Arrays are Objects
// You can have objects in an Array. You can have functions in an Array. You can have arrays in an Array

cars.length; // Returns the number of elements
cars.sort(); // Sorts the array

fruits.push("Lemon"); // Adds a new element (Lemon) to fruits

// JavaScript does not support arrays with named indexes.
// In JavaScript, arrays always use numbered indexes.

// If you use named indexes, JavaScript will redefine the array to an object.
// After that, some array methods and properties will produce incorrect results.

// In JavaScript, arrays use numbered indexes.
// In JavaScript, objects use named indexes.
// Arrays are a special kind of objects, with numbered indexes.

// JavaScript has a built-in array constructor new Array().
// But you can safely use [] instead.
// Create an array with 40 undefined elements:
const points = new Array(40);

// A common question is: How do I know if a variable is an array?
Array.isArray(fruits);
fruits instanceof Array;

const fruits = ["Banana", "Orange", "Apple", "Mango"];
document.getElementById("demo").innerHTML = fruits.toString(); // Banana,Orange,Apple,Mango
document.getElementById("demo").innerHTML = fruits.join(" * "); // Banana * Orange * Apple * Mango

// The pop() method removes the last element from an array

// The push() method adds a new element to an array (at the end)
// The push() method returns the new array length

// The shift() method removes the first array element and "shifts" all other elements to a lower index

// The unshift() method adds a new element to an array (at the beginning), and "unshifts" older elements
// The unshift() method returns the new array length

fruits[fruits.length] = "Kiwi";

// Array elements can be deleted using the JavaScript operator delete.
// Using delete leaves undefined holes in the array.
// Use pop() or shift() instead.
delete fruits[0];

const myGirls = ["Cecilie", "Lone"];
const myBoys = ["Emil", "Tobias", "Linus"];
const myChildren = myGirls.concat(myBoys);
