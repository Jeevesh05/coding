package main

import (
	"fmt"
	"time"
)

func main() {
	//playing with time
	presentTime := time.Now()
	fmt.Println(presentTime)

	//this is the default time used for formating
	formatedDate := presentTime.Format("01-02-2006 15:04:05 Monday")
	day := presentTime.Weekday()
	fmt.Println(formatedDate)
	fmt.Printf("type of date: %T  and %T  and %T\n", presentTime, formatedDate, day)

	//create our own date
	createdDate := time.Date(2020, time.April, 5, 15, 15, 15, 15, time.UTC)
	fmt.Println("our create date", createdDate)

	newTime := presentTime.Add(time.Hour)
	fmt.Println("after 12 hrs: ", newTime)

}
