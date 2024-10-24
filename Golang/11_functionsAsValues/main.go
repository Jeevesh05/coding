package main

import (
	"fmt"
	"math"
)

func compute(fn func(float64, float64) float64) float64 {
	fmt.Println("compute fn was called ")
	return fn(3, 4)
}

// for closures
func adder() func(int) int {
	sum := 0
	return func(x int) int {
		sum += x
		return sum
	}
}

func main() {
	hypot := func(x, y float64) float64 {
		fmt.Println("Hypo function was called with values ", x, y)
		return math.Sqrt(x*x + y*y)
	}
	fmt.Println(hypot(5, 12))
	// add := func(x, y float64) float64 {
	// 	return (x*x + y*y)
	// }
	fmt.Println(compute(hypot))

	// closures, every variable will have its own copy of the function
	fmt.Println("Learning closures")
	pos, neg := adder(), adder()
	for i := 0; i < 10; i++ {
		fmt.Println(
			pos(i),
			neg(-i),
		)
	}
}
