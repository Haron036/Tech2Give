/* Question1Write a program that prints the numbers from 1 to 100. For multiples of 3, print "Fizz"; for multiples of 5, print "Buzz"; and for numbers that are multiples of both 3 and 5, print "FizzBuzz"*/
public class FizzBuzz {

	public static void main(String[] args) {
		for(int num=1;num<=100;num++) {
			if(num%15==0) {
				System.out.println("FizzBuzz");
			}else if(num%3==0) {
				System.out.println("Fizz");
			}else if(num%5==0) {
				System.out.println("Buzz");
			}else {
				System.out.println(num);
			}
		}

	}

}
