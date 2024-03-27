


	/*
	 *@file:- Expanse.java
	 *@brief:- In this Program We Are Making An a Expanse Traker
	 *@Auther:- Group Nmber 9
	 *@Date:- 15/02/2024
	 */

	/*
	 *  Algorithm :- 
	 *  
	 *  Part 1 :- 
	 *           1)In this part (Deatil_Expanse)we are Delcaring the varialbes :- Date,Amount,Deatil for The Expation.
	 *           2)we are Using the parametrized Constructor to passing the parametsrs to the variable.
	 *           3)Using (this) Keyword we are Returning the values of our Declared Variable.
	 *           
	 *  Part 2 :-
	 *          1) In this part we eare Creating one class(fileWriter_reeader) Which craeats a file name as :-"Expanse.txt".
	 *          2) inside a class we are crating two methods :-1)  Saving_expanses()
	 *           											   2)  Show_Expanse()   
	 *          3) Saving_expanses() :- this method helps to write the data in the file 
	 *          3) Show_Expanse () :_ this method is hepls to read & display the data From the table
	 *          
	 *  Prat 3 :-
	 *    		1) In this part e creating a bufferd readrer object for taking inputs
	 *     		2) after that  calling the method for displaying the Expanse
	 *      	3) We are  using Switch Case for taking user Input
	 *          
	 *         
	 */




	// Importing the Java Packages which are use int this project



		import java.io.BufferedReader;
	import java.io.File;
	import java.io.FileNotFoundException;
	import java.io.FileReader;
	import java.io.FileWriter;
	import java.io.IOException;
	import java.io.InputStreamReader;
	import java.util.ArrayList;

        import javax.swing.JFrame;
        import javax.swing.JScrollPane;
        import javax.swing.JTable;
        import javax.swing.table.DefaultTableModel;
        import java.awt.BorderLayout;	





	/*
	 * Implementing a class that  returns Date , Description, Amount of the Expanse
	 */

	class Deatail_Expanse {
		
	 // Declaring the varialbe
		 String E_Date ; // E_Date(Expanse Date)
		 String E_Description ; //E_Description(Description of our Expance)
		 double E_Amount ; // E_Amount(Amount of Expanse)
		 
		 
		 // Parametrized Constructor
		   Deatail_Expanse(String D,String DS,double A)
		   {
			   this.E_Date = D;
			   this.E_Description = DS;
			   this.E_Amount = A;
			   
		   }
		 
		 
	/*
	 *@Function:- Get_Date
	 *@Parameters :- None
	 *@Return :- E_Date
	*/
		 public String Get_Date()
		 {
			 return E_Date;
		 }

	/*
	 *@Function:- Get_Description
	 *@Parameters :- None
	 *@Return :- E_Description
	*/
		 public String Get_Description()
		 {
			 return E_Description;
		 }
		 
	/*
	 *@Function :- Get_Amount
	 *@Parameters :_ None
	 *@Return:- E_Amount 
	 */
		 public double Get_Amount()
		 {
			 return E_Amount;
		 }
		 
		 
		 
	/*
	 *@Finction :- Display
	 *@parameter :- None
	 *@Retur :- This Function Will Diplay The Date,Description,Amount	 
	 */
		//  public String Dispay() {
		//         return "Expense(date=" + E_Date + ", description=" + E_Description + ", amount=" + E_Amount + ")";
		//     }

		 @Override
		 public String toString() {
		     return "Expense(date=" + E_Date + ", description=" + E_Description + ", amount=" + E_Amount + ")";
		 }

	}


	// Implementing class for writing and reading the data from the  file

	  class filewriter_reader
	 {
	 	
		  // Name of the file 
	      public static void Saving_expanses(ArrayList< Deatail_Expanse>Items) // creating a method whic has 1 paramter named as ArrayLis
	     {
			File myFile = new File("SaveF.txt  ");
		    try  {
				myFile.createNewFile();
			
	    		  FileWriter writer = new FileWriter(myFile);
	    		  for(Deatail_Expanse Exp : Items) // using for loop for each and evry Element
	    	       {
	    			    String line = Exp.Get_Date() + "," + Exp.Get_Description() + "," + Exp.Get_Amount() + "\n";
	    			    writer.write(line);// writing the data 
	    	       
					}
					writer.close();
	     }
	     
		  catch(IOException e) // catch bolck
	     {
	       e.printStackTrace();// for throwalbe class 
	     }
	     }
	      
	      
	      
	      // Creating a method for reading the data from the file 
	      static ArrayList<Deatail_Expanse> Show_Expanse() throws NumberFormatException,IOException // Throwing the Exception
	      {
	    	  ArrayList<Deatail_Expanse> New_Expanse = new ArrayList<>(); // creating an objct of ArrayList for New Excpanse
	    	  String New_Line;                                          // For New Line 
	    	   
			  try (FileReader myReader = new FileReader("SaveF.txt")) {
	    		  BufferedReader br = new BufferedReader(myReader);
	    		  while ((New_Line = br.readLine()) != null) // this statemnts is use for reading the all lines fro mthe file
	    		  {
	    			  String[] OOP1 = New_Line.split(","); // here we are creating an for Stoaring thw new expense entry 
	                  New_Expanse.add(new Deatail_Expanse(OOP1[0],OOP1[1],Double.parseDouble(OOP1[2]))); // this saves the input in index of created array
	    		     
					}
	    		  
	    	  } catch (FileNotFoundException e) { // this Excption eill bo thorw when file is not 
			
				e.printStackTrace(); // for thorw able class 
			}  
	    	  return New_Expanse; // retunrs the New_Excption 
	    	  
	      }
	 }
	  
	  
	 // class that contain driver/ Main method method
	 public class expanseMain
	{ 
		 
		
		// Driver Method 
		public static void main(String[] args) throws NumberFormatException, IOException {
			BufferedReader in =  new BufferedReader(new InputStreamReader(System.in)); // creating an object for taking  input
			ArrayList<Deatail_Expanse> r = filewriter_reader.Show_Expanse(); // calling the method for show am Expanse
			
			 
			while(true) // looping statements
			{
				System.out.print("*********************************************WELCOME*****************************\n");
				System.out.println("Menu:-\n");
				System.out.println("Welcome to your Expanse Tacker Menu\n");
				System.out.println("1.Add Expense");
				System.out.println("2.view Expenses");
				System.out.println("3.Exit");
				
				System.out.println("Enter your Choice :");
				int ch =Integer.parseInt(in.readLine());
				
				switch(ch)
				{

				case 1:
					System.out.println("Enter the Date:-");
					String E_Date = in.readLine();
					
					System.out.println("Enter  Discription:-");
					String E_Discription =  in.readLine();
					
					System.out.println("Entre the Amount:-");
					double E_Amount =Double.parseDouble(in.readLine());
					
					r.add(new Deatail_Expanse(E_Date,E_Discription,E_Amount)); // adding the New Expanse in file
					
					filewriter_reader.Saving_expanses(r) ;// saving the Expanse in file 
					
					break;
					
					
				case 2:
					
					String[] columnName  = {"Date","Desscription","Aamount"};
					DefaultTableModel model = new DefaultTableModel(columnName,0);
					
					
					 for(Deatail_Expanse Exp : r)
					 {
					String [] row = {Exp.Get_Date(),Exp.Get_Description(),String.valueOf(Exp.Get_Amount())};
				
					model.addRow(row);
					
					 }
					 
					 JTable table = new JTable(model);
					 
					 JFrame frame = new JFrame();
					 frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
					 frame.getContentPane().add(new JScrollPane(table),BorderLayout.CENTER);
					 frame.setSize(600,200);
					 frame.setVisible(true);
					 break;
					 
					 
					 case 3:
					 System.out.println("Thanks For Using!");
					 System.exit(0);
					
					default :
						     System.out.println("Error:-Invalid Choice:");
							 
				}   
			}
			
		}

		}

	 
		




