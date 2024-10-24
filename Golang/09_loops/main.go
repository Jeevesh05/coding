package main

import "fmt"

func main() {

	days := []string{"sunday", "monday", "tuesday", "wednesday", "thursday"}

	// for d := 0; d < len(days); d++ {
	// 	fmt.Println("today is ", days[d])
	// }

	// for i := range days {
	// 	fmt.Println(days[i])
	// }

	for ind, day := range days {
		fmt.Println(day, " is present on index ", ind)
	}

	//mimicking while loop
	val := 1
	for val < 10 {

		if val == 4 {
			goto block
		}

		fmt.Println(val)
		val++
	}
block:
	fmt.Println("in th block")

}
