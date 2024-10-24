// remove mutex code and run on terminal
//
//	go run --race main.go
//
// if nothing gets printed then no race condition
package main

import (
	"fmt"
	"sync"
)

func main() {
	var wt sync.WaitGroup
	mut := &sync.Mutex{}

	var numbs = []int{0}

	wt.Add(3)
	go func(wt *sync.WaitGroup, m *sync.Mutex) {
		m.Lock()
		fmt.Println("one R")
		numbs = append(numbs, 1)
		m.Unlock()
		wt.Done()
	}(&wt, mut) // since mut consists directly address we do not need to use &
	go func(wt *sync.WaitGroup, m *sync.Mutex) {
		m.Lock()
		fmt.Println("Two R")
		numbs = append(numbs, 2)
		m.Unlock()
		wt.Done()
	}(&wt, mut)
	go func(wt *sync.WaitGroup, m *sync.Mutex) {
		m.Lock()
		fmt.Println("Three R")
		numbs = append(numbs, 3)
		m.Unlock()
		wt.Done()
	}(&wt, mut)

	wt.Wait()
	fmt.Println("Final value of slice ", numbs)
}
