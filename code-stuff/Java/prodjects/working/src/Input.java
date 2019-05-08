import java.util.Scanner;
public class Input {
	public static void main(String []args) {
		Scanner KeyboardInput = new Scanner(System.in);
		System.out.print("Enter you name: ");
		String Name = KeyboardInput.nextLine();
		
		System.out.print("Enter you Age: ");
		int Age = KeyboardInput.nextInt();
		System.out.println("hey " + Name + ", you are " + Age + ",Years old");
	}
}
