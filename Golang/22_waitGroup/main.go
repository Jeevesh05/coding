package main

import (
	"fmt"
	"log"
	"net/http"
	"sync"
)

func main() {
	var wg sync.WaitGroup
	var websites = []string{
		"https://google.com",
		"https://youtube.com",
		"https://instagram.com",
	}
	for i := 0; i < len(websites); i++ {
		wg.Add(1)
		go getStatusCode(websites[i], &wg)
	}
	wg.Wait()
	fmt.Println("After wait func of waitgroup")
}

func getStatusCode(endpoint string, wg *sync.WaitGroup) {
	defer wg.Done()
	res, err := http.Get(endpoint)

	if err != nil {
		log.Fatal(err)
	} else {
		fmt.Printf("%d is the status code for %s\n", res.StatusCode, endpoint)
	}
}
