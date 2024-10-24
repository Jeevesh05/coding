package main

import (
	"bytes"
	"encoding/json"
	"fmt"
	"io"
	"log"
	"strings"

	"net/http"
	"net/url"
)

func main() {
	//fmt.Println("working with server and performing GET request")
	//performGetRequest()
	//PerformPostJsonRequest()
	// PerformPostJsonRequestUsingStructs()
	PerformPostFormRequest()
}
func performGetRequest() {
	const myurl = "http://localhost:8000/get"
	resp, err := http.Get(myurl)

	if err != nil {
		log.Fatal(err)
	}
	defer resp.Body.Close()
	fmt.Println("status code: ", resp.StatusCode)

	if resp.StatusCode == http.StatusOK {
		bodyBytes, err := io.ReadAll(resp.Body)
		if err != nil {
			log.Fatal(err)
		}

		bodyString := string(bodyBytes)
		fmt.Println(bodyString)

	}
}

func PerformPostJsonRequest() {
	const myurl = "http://localhost:8000/post"

	//new reader allows you to
	// use backticks(one with tilde sign), it is use where you want to add a new line for readibility but the syntax
	// does not allow it
	requestBody := strings.NewReader(` 
	{
		"coursename" : "Let us Golang",
		"price" : 0
		}
	`)

	//look for content type in headers through thunderClient : application/json
	response, err := http.Post(myurl, "application/json", requestBody)

	if err != nil {
		log.Fatal(err)
	}
	defer response.Body.Close()
	bodyBytes, _ := io.ReadAll(response.Body)
	bodyString := string(bodyBytes)
	fmt.Println("response from the server, ", bodyString)

}
func PerformPostJsonRequestUsingStructs() {
	const myurl = "http://localhost:8000/post"
	/*
	   If you're working with structured data, it's often preferable to use json.Marshal
	    to convert a Go struct to JSON. This approach is type-safe and reduces the risk of formatting errors in your JSON:
	*/
	cor := Course{Coursename: "Python", Price: 30}
	requestBody, err := json.Marshal(cor)
	if err != nil {
		log.Fatal(err)
	}
	response, err := http.Post(myurl, "application/json", bytes.NewBuffer(requestBody))

	if err != nil {
		log.Fatal(err)
	}
	defer response.Body.Close()
	bodyBytes, _ := io.ReadAll(response.Body)
	bodyString := string(bodyBytes)
	fmt.Println("response from the server, ", bodyString)
}

func PerformPostFormRequest() {
	const myurl = "http://localhost:8000/postform"
	// cor := Course{Coursename: "Java", Price: 200}
	// requestBody, err := json.Marshal(cor)
	// if err != nil {
	// 	log.Fatal(err)
	// }
	data := url.Values{}
	data.Add("courseName", "Java")
	data.Add("price", "100")
	response, err := http.PostForm(myurl, data)

	if err != nil {
		log.Fatal(err)
	}
	defer response.Body.Close()
	bodyBytes, _ := io.ReadAll(response.Body)
	bodyString := string(bodyBytes)
	fmt.Println("response from the server, ", bodyString)
}

type Course struct {
	Coursename string `json:"coursename"`
	Price      int    `json:"price"`
}
