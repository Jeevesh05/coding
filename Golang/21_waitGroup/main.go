package main

import (
	"fmt"
	"sync"
)

func main() {
	var wg sync.WaitGroup

	wg.Add(1)
	go func() {
		defer wg.Done() // wg.add(-1) not recommanded as it can make the goroutine counter -ve and lead to panic at runtime
		greeter("hello")
	}()

	wg.Wait()
}

func greeter(s string) {
	i := 0
	for i < 5 {
		//time.Sleep(3 * time.Millisecond)
		fmt.Println(s)
		i++
	}
}
