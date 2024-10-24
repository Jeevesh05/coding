// In Go, new and make are both used for memory allocation, but they serve different purposes and are used with different types. Here's a breakdown of the differences between the two:

// new
// Purpose: new is used to allocate memory for a variable and returns a pointer to it. It initializes the memory to the zero value of the type.
// Usage: It's typically used for basic types (e.g., integers, structs) and returns a pointer to the allocated type.
// Syntax: ptr := new(Type)
// Example:

package main

type Person struct {
	Name string
	Age  int
}

// func main() {
// 	p := new(Person) // p is a pointer to a Person struct
// 	p.Name = "Alice"
// 	p.Age = 30

// 	fmt.Println(*p) // Output: {Alice 30}
// }

// make
// Purpose: make is used to allocate and initialize slices, maps, and channels. It returns an initialized (but not zeroed) value of the specified type.
// Usage: It's used specifically for three built-in types: slices, maps, and channels. Unlike new, make does not return a pointer.
// Syntax: slice := make([]Type, length, capacity), m := make(map[KeyType]ValueType), ch := make(chan Type)
// Example

// func main() {
// 	// Create a slice with length 3 and capacity 5
// 	slice := make([]int, 3, 5)
// 	slice[0] = 1
// 	slice[1] = 2
// 	slice[2] = 3

// 	fmt.Println(slice) // Output: [1 2 3]
// 	fmt.Println(len(slice)) // Output: 3
// 	fmt.Println(cap(slice)) // Output: 5

// 	// Create a map
// 	m := make(map[string]int)
// 	m["Alice"] = 30
// 	m["Bob"] = 25

// 	fmt.Println(m) // Output: map[Alice:30 Bob:25]

// 	// Create a channel
// 	ch := make(chan int)
// 	go func() {
// 		ch <- 42
// 	}()
// 	fmt.Println(<-ch) // Output: 42
// }

// Key Differences

// Return Type:new returns a pointer to the type (*Type).
// make returns an initialized value of the specified type (not a pointer).

// Types:
// new can be used with any type.
// make is specifically for slices, maps, and channels.

// Initialization:
// new initializes memory to the zero value of the type.
// make initializes the internal data structures of slices, maps, and channels but does not initialize their elements.

// Summary
// Use new when you want to allocate memory for a variable and get a pointer to that type.
// Use make when you need to create and initialize slices, maps, or channels.
