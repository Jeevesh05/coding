package main

import (
	"fmt"
	"time"
)

func main() {
	go helloGreeter("hello")
	greeter("JD")
}

func greeter(s string) {
	i := 0
	for i < 5 {
		time.Sleep(3 * time.Millisecond)
		fmt.Println(s)
		i++
	}
}
func helloGreeter(s string) {
	i := 0
	for i < 5 {
		//time.Sleep(3 * time.Millisecond)
		fmt.Println(s)
		i++
	}
}
