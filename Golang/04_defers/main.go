package main

import "fmt"

func add(num1, num2 int) int {

	defer fmt.Println("defer from function call")
	fmt.Println("function call")
	return num1 + num2
}

func main() {
	defer fmt.Println("world")
	//defer add(10, 11)
	//defer fmt.Println(add(5, 6))  // here only the task of printing is defered but function will be
	// called as per the line of execution only
	fmt.Println("hello")

	// proof of stack
	fmt.Println("counting")

	for i := 0; i < 10; i++ {
		defer fmt.Println(i)
	}

	fmt.Println("done")
}
