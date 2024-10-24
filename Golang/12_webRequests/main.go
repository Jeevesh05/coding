package main

import (
	"fmt"
	"io"
	"net/http"
)

const url = "https://chaicode.com"

func main() {

	response, err := http.Get(url)

	if err != nil {
		panic(err)
	}
	fmt.Printf("Respnse is of type %T\n", response) // notice it has a * inn front indicating the exact response is received
	// and not a copy of it. original response is given so that user can manuplate the actual response and not

	defer response.Body.Close() // it is the responsibility of the caller to close it.

	databyte, err := io.ReadAll(response.Body)
	if err != nil {
		panic(err)
	}
	fmt.Println("data from the response is /n", string(databyte))

}
