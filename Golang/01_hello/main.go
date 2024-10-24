package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
	"strings"
)

// variables with first letter cap becomes public
// variables outside metods can not be initialized using := operator
var GlobalVar = 45

func main() {
	var smallInt uint8 = 255 // 266 will give an error as range is crossed(refer doc for range)
	fmt.Println(smallInt)
	fmt.Printf("type of: %T \n", smallInt)

	// if variable initialised then lexer will assign the datatype
	var name = "a" // single quotes a will store ASCII values
	fmt.Println(name)
	fmt.Printf("type of: %T \n", name)

	//works only inside methods
	users := 99
	fmt.Println(users)
	fmt.Printf("type of: %T \n", users)

	// user input
	// buffer input is type and NewReader is method
	reader := bufio.NewReader(os.Stdin)
	fmt.Print("Enter a rating =  ")

	//comma OK syntax
	// := comes handy as we do not know which type of data is goinf to come
	// read the string till new line char is met
	input, _ := reader.ReadString('\n')
	fmt.Println("thanks for rating, ", input)
	fmt.Printf("type of rating: %T \n", input) // input is of type string

	//conversion
	//input contains new line char, so space needs to be removed
	numRating, err := strconv.ParseInt(strings.Trim(input, "\n"), 10, 64)

	if err != nil {
		fmt.Println(err)
		//to stop the prgram use panic(err)
	} else {
		fmt.Println("1 added to rating: ", numRating+1)
	}

	str1 := "    hello how are you    "
	trimmedStrting := strings.Trim(str1, " ") // eliminates leading and trailing spaces
	fmt.Println(trimmedStrting)
}
