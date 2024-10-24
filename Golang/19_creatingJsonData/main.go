package main

import (
	"encoding/json"
	"fmt"
	"log"
)

type course struct {
	Name     string `json:"name"`
	Price    int
	Platform string   `json:"website"`
	Password string   `json:"-"`
	Tags     []string `json:"tags"`
	//,omitempty   // have to tell about this
}

func main() {
	encodeJson()
	//decodeJson()
}
func encodeJson() {
	myCourses := []course{
		{"react", 300, "chaicode", "abc123", []string{"web-dev", "js"}},
		{"css", 100, "chaicode", "iop123", []string{"web-des", "js"}},
		{"java", 500, "chaicode", "nmk", nil},
	}

	finalJson, err := json.MarshalIndent(myCourses, "", "\t")
	if err != nil {
		log.Fatal(err)
	}
	fmt.Println(string(finalJson))
}

func decodeJson() {
	//backtick
	jsonDataFromWeb := []byte(`
		{
			"name":"DBMS",
			"Price": 299,
			"website":"hello.com",
			"tags":["web-dev","js"]
		}
	`)

	var lcoCourse course
	checkValid := json.Valid(jsonDataFromWeb)

	if checkValid {
		fmt.Println("JSON is valid")
		json.Unmarshal(jsonDataFromWeb, &lcoCourse)
		fmt.Printf("%#v\n", lcoCourse)
	} else {
		fmt.Println("invalid json data")
	}
	var myOnlineData map[string]interface{}
	json.Unmarshal(jsonDataFromWeb, &myOnlineData)
	fmt.Printf("%#v\n", lcoCourse)

	fmt.Println()
	for key, value := range myOnlineData {
		fmt.Printf("key is %v and value is %v and type is %T \n", key, value, value)
	}

}
