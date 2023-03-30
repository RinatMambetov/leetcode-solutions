if (typeof (Storage) !== "undefined") {
	// Code for localStorage/sessionStorage.
} else {
	// Sorry! No Web Storage support..
}

// Store
localStorage.setItem("lastname", "Smith");

// Retrieve
document.getElementById("result").innerHTML = localStorage.getItem("lastname");

if (sessionStorage.clickcount) {
	sessionStorage.clickcount = Number(sessionStorage.clickcount) + 1;
} else {
	sessionStorage.clickcount = 1;
}
document.getElementById("result").innerHTML = "You have clicked the button " +
	sessionStorage.clickcount + " time(s) in this session.";
