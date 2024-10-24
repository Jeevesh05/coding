package main

import (
	"fmt"
	"net/url"
)

// to add more paramters we generally use , but in url we use &
const myUrl = "https://www.youtube.com/watch?v=1MdX9Z9fWWw"

func main() {

	result, _ := url.Parse(myUrl)

	fmt.Println("schema = ", result.Scheme)
	fmt.Println("host = ", result.Host)
	fmt.Println("path = ", result.Path)
	fmt.Println("port = ", result.Port())

	qparams := result.Query() // returns a map
	fmt.Println(qparams)
	fmt.Printf("type of query params are %T\n", qparams)

	fmt.Println(qparams["v"])
}
