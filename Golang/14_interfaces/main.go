package main

import (
	"fmt"
	"math"
)

type gemoetry interface {
	area() float32
	perim() float32
}
type circle struct {
	radius float32
}

func (c circle) area() float32 {
	return 2 * math.Pi * c.radius * c.radius
}
func (c circle) perim() float32 {
	return 2 * math.Pi * c.radius
}

func measures(g gemoetry) {
	fmt.Println(g)
	fmt.Println(g.area())
	fmt.Println(g.perim())
	fmt.Printf("perimiter for 2 decimal places = %.1f \n", g.perim())
}

func main() {
	c := circle{radius: 7}
	measures(c)

	var g gemoetry
	//fmt.Println(g.area()) // runtime error as methods of g interface are not implemented or in other
	//words, there is no type inside the interface tuple to indicate which concrete method to call

	//way 2
	g = c
	fmt.Println("print throgh 2nd way ", g.area())

	var c2 circle
	g = c2
	fmt.Println("nil object ", g.area())

	// empty interfaces
	fmt.Println("	empty interfaces")
	var emp interface{}
	describe(emp)
	emp = 45
	describe(emp)
	emp = "hello"
	describe(emp)
}

func describe(i interface{}) {
	fmt.Printf("(value = %v		 type = %T)\n", i, i)
}
