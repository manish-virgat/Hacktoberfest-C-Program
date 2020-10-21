import java.util.*;
class DiceGame
{
    public static void main(String[] args)
	{
		 Scanner s = new Scanner(System.in);
		 Random r =new Random();
		 String user1,user2;
		 int score1=0,score2=0,n;
		 System.out.print("Enter name of user 1: ");
		 user1=s.nextLine();
		 System.out.print("Enter name of user 2: ");
		 user2=s.nextLine();
		 user1=user1.toUpperCase();
		 user2=user2.toUpperCase();
		 do
		 {
			 System.out.print("\n"+user1+" turn...\n\nPress Enter to Throw dice: ");
			 s.nextLine();
			 n=r.nextInt(6)+1;
			 System.out.println("\nyou get:"+n);
			 score1+=n;
             System.out.println("\n"+user1+" score:"+score1);
			 if(score1>=20)
			 {
				System.out.println("\n\n\t\t******* GAME OVER *******\n\n\t...... Winner of the game is "+user1+" ......");
				System.out.println("\n\n\t******* Congratulations "+user1+" *******");
				break;
			 }
			 else
			 {
				 System.out.print("\n\t\t\t"+user2+" turn...\n\n\t\t\tPress Enter to Throw dice: ");
				 s.nextLine();
				 n=(r.nextInt(6))+1;
				 System.out.println("\n\t\t\tyou get:"+n);
				 
				 score2+=n;
				 System.out.println("\n\t\t\t"+user2+" score:"+score2);
				 if(score2>=20)
				 {
					 System.out.println("\n\n\t\t******* GAME OVER *******\n\n\t...... Winner of the game is "+user2+" ......");
					 System.out.println("\n\n\t******* Congratulations "+user2+" *******");
					 break; 
				 }
			 }
		 }while(true);
	}
	

}
