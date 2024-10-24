package main

import "fmt"

//Golang does not support inheritance and so there is no child and parent relationship

// struct are replacement of classes and will also be exported so use cap letter for initial
type User struct {
	// to make data members public use first letter cap
	Name      string
	Age       int
	isMarried bool
}

// methods on structs
func (u User) marriageStatusTrue() {
	fmt.Println("function call")
	u.isMarried = true
	fmt.Println("Married status of the user ", u.isMarried)
}

// different ways of making an methods and calling them
type numbers struct {
	num1 int
	num2 int
}

func (n numbers) add() int {
	return n.num1 + n.num2
}

func addFunc(n numbers) int {
	return n.num1 + n.num2
}

// method that will do manuplation on the actual object
func (n *numbers) numModifier(num1 int, num2 int) {
	n.num1 = num1
	n.num2 = num2
}

func main() {
	rohit := User{"Rohit", 37, false}
	virat := User{
		Name:      "Virat",
		Age:       30,
		isMarried: true,
	}
	fmt.Println(rohit, virat)
	// +v will display the property name and it value
	//fmt.Printf("the name of the player is %s and his details are %+v", virat.Name, virat)

	//pointers with structs
	// ptr := &rohit
	// fmt.Println(ptr)

	rohit.marriageStatusTrue()
	fmt.Println("status of user marriage outside function: ", rohit.isMarried)

	// diifernt ways to call the function
	numExp := numbers{4, 5}
	fmt.Println(numExp.add())
	fmt.Println(addFunc(numExp))

	fmt.Println("before manuplation = ", numExp)
	numExp.numModifier(10, 20)
	// or numModifier(&numExp,10,20)
	fmt.Println("after manuplation = ", numExp)
}
