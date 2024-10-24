/*
When you pass the channel to a function or goroutine, you are passing a copy of the reference (the pointer) to the channel,
not a copy of the channel itself. This means that both the original channel and the copied reference in the goroutine point
to the same underlying channel. Any send or receive operation on either reference will affect the same channel.
*/
package main

import (
	"fmt"
	"sync"
)

func main() {
	myCh := make(chan int, 2)
	wg := &sync.WaitGroup{}

	wg.Add(2)
	go func(ch chan int, wg *sync.WaitGroup) {
		defer wg.Done()
		val, isChannelOpen := <-myCh
		fmt.Printf("is channel open : %v and its value : %d\n", isChannelOpen, val)
		// fmt.Println("receiving")
		// fmt.Println(<-myCh)
		// fmt.Println("5 received")
		// fmt.Println(<-myCh)
		// fmt.Println("all received")
	}(myCh, wg)
	go func(ch chan int, wg *sync.WaitGroup) {
		defer wg.Done()
		myCh <- 0
		//close(myCh)
		// fmt.Println("sending data")
		// myCh <- 5
		// fmt.Println("5 is sent")
		// myCh <- 6
		// fmt.Println("6 is sent")
	}(myCh, wg)

	wg.Wait()
}
