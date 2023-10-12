package main

import "fmt"

func main(){

	var num[100] int	var temp,sum,avg int

	fmt.Print("Enter number of elements: ")

	fmt.Scanln(&temp)

	for i := 0; i < temp; i++ {

		fmt.Print("Enter the number : ")

		fmt.Scanln(&num[i])		

		sum += num[i]

	}

	

	avg = sum/temp

	fmt.Printf("The Average of entered %d number(s) is %d",temp,avg)

}
