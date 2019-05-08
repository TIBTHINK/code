import javax.swing.JFrame;
import java.awt.FlowLayout;
import javax.swing.*;
public class FirstGui extends JFrame {
	private JLabel label;
	private JButton button;
	
	public FirstGui () {
		setLayout(new FlowLayout());
		
		label = new JLabel("sup bitches");
		add(label);
		
		button = new JButton("kill yourself");
		add(button);
		ImageIcon img = new ImageIcon();
		
	}
	public static void main (String args[]) {
		FirstGui gui = new FirstGui();
		gui.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		gui.setSize(200, 125);
		gui.setVisible(true);
		gui.setTitle("ERROR");
	}
	
	

}





