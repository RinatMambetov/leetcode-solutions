package main

import (
	"fmt"
	"strings"
)

func countPoints(rings string) int {
	var arr [10]string
	count := 0
	for i := 0; i < len(rings); i += 2 {
		id := int(rings[i+1]) - 48
		if strings.ContainsRune(arr[id], rune(rings[i])) == false {
			arr[id] += string(rings[i])
			if len(arr[id]) == 3 {
				count++
			}
		}
	}
	return count
}

func main() {
	fmt.Println(countPoints("B0B6G0R6R0R6G9")) //1
	fmt.Println(countPoints("B0R0G0R9R0B0G0")) //1
	fmt.Println(countPoints("G4"))             //0
}
