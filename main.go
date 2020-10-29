package main

import (
	"fmt"
	"math"
)

func IsPrime(value int) bool {
	for i := 2; i <= int(math.Floor(float64(value)/2)); i++ {
		if value%i == 0 {
			return false
		}
	}
	return value > 1
}

func main() {
	var i int
	for i := 1; i <= 1000000; i++ {
		if IsPrime(i) {
			i++
			//fmt.Printf("%v ", i)
		}
	}
	fmt.Printf("Number of primes in 1000000 is %v\n", i)
}
