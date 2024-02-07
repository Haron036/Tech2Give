/* Question 6Write a program that counts the number of vowels in a sentence.*/
public class VowelCounter {

	public static void main(String[] args) {
		String sentence="How are you?";
		int vowelCount=countVowels(sentence);
		System.out.println("Number of vowels in the sentence'"+sentence+"':"+vowelCount);

	}
	private static int countVowels(String sentence) {
		int count=0;
		String vowels="aeiouAEIOU";
		for(int i=0;i<sentence.length();i++) {
			char currentChar=sentence.charAt(i);
			if(vowels.indexOf(currentChar)!=-1) {
				count++;
			}
		}
		return count;
	}

}
