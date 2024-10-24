package main

import (
	"fmt"
	"io"
	"os"
)

func checkNilError(err error) {
	if err != nil {
		panic(err)
	}
}

func readFile(file string) {
	databytes, err := os.ReadFile(file)
	checkNilError(err)

	fmt.Println("data from the file in true form: \n", databytes)
	fmt.Println("data in string \n", string(databytes))
}

func main() {
	content := "Hello, How are You ?"
	// Way 1
	fileName := "./demoFile.txt"
	file, err := os.Create(fileName)
	checkNilError(err)
	fmt.Printf("file type = %T and error type = %T\n", file, err) // if no err then nil else of type error
	io.WriteString(file, content)

	//way 2
	defer file.Close()

	readFile(fileName)

}
