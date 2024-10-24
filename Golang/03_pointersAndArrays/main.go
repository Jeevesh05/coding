package main

import "fmt"

func main() {
	//pointers
	mynum := 55
	var ptr *int = &mynum
	fmt.Println("memory address located by myptr: ", ptr)
	fmt.Println("value allocated : ", *ptr)

	//arrays
	var arr1 [5]string
	arr1[0] = "virat"
	arr1[1] = "rohit"
	arr1[4] = "dhoni"
	fmt.Println("my array = ", arr1)

	var arr2 = [3]int{1, 2, 3}
	fmt.Println(arr2)
}
