package main

import (
	"fmt"
	"math/rand"
)

func main() {
	//intn starts from 0 and specified no is excluded
	diceNo := rand.Intn(6) + 1
	fmt.Println("dic no is ", diceNo)
	//falthrough can be used to not break after checking
	switch diceNo {
	case 1:
		fmt.Println("you can move 1")
		fallthrough
	case 2:
		fmt.Println("you can move 2")
	case 3:
		fmt.Println("you can move 3")
	case 4:
		fmt.Println("you can move 4")
	case 5:
		fmt.Println("you can move 5")
	case 6:
		fmt.Println("you can move 6")
	default:
		fmt.Println("what have u done")
	}
}
