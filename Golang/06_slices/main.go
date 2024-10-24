package main

import (
	"fmt"
	"sort"
)

func main() {
	// initialisation is same as array just u dont give the fixed size in []
	var fruitlist = []string{"apple", "mango"}
	fmt.Printf("Type of fruitList: %T\n", fruitlist)

	fruitlist = append(fruitlist, "banana")
	fmt.Println(fruitlist)

	// 2nd way of making slices using make method
	// make can craete slices,map,channels
	scores := make([]int, 3, 4) // type of data, length , capacity
	/*
		Length: The number of elements currently in the slice.
		Capacity: The maximum number of elements the slice can hold without needing to allocate new memory.

		Q. Why Use Capacity?
		A. Performance: Specifying a capacity can improve performance by reducing the number of allocations.
			 If you know the maximum size the slice will need, you can preallocate enough space.

			 Memory Management: Allocating a slice with a capacity helps manage memory more efficiently, especially in
			 scenarios where you're dealing with large data sets.

			Avoiding Reallocation: When you append elements to a slice that exceeds its current capacity,
			Go will automatically allocate a new array and copy the existing elements, which can be costly in terms of performance. By setting a suitable capacity upfront, you can avoid this overhead.
	*/
	scores[0] = 77
	scores[1] = 44
	scores[2] = 55
	scores[3] = 111 // only initial size can be used
	// secondhalfScores := []int{88, 11}
	scores = append(scores, []int{88, 99, 111, 222, 333}...)
	//scores[3] = 66
	fmt.Println("after appending ", scores)
	sort.Ints(scores)
	fmt.Println("after sorting = ", scores)
	var scores2 = []int{1, 2, 3, 4, 5}
	finalScores := append(scores, scores2...)
	fmt.Println(finalScores)
	fmt.Println("Sliced elements = ", finalScores[1:4]) // last value is exclusive

	// how to remove a specific index
	var indexToBeRemoved = 2
	// a new slice is created while not considering the index element
	scores2 = append(scores2[:indexToBeRemoved], scores2[indexToBeRemoved+1:]...)
	fmt.Println(scores2)

}
