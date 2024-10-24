package main

import "fmt"

func main() {
	languages := make(map[string]string)

	languages["js"] = "javascript"
	languages["py"] = "python"
	languages["rb"] = "ruby"

	fmt.Println(languages)

	for key, value := range languages {
		fmt.Printf("for key = %v and value = %v \n", key, value)
	}

}
