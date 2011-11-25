// Assemblyc.java           05 Apr 05

// compile: javac Assemblyc.java
// run:     java Assemblyc

class Partc {
   public String name;
   public int size;
   public double weight;
   public boolean pretty;
   public Partc next;

    public Partc (String nm, int sz, double wt, boolean pr, Partc nx)
    {
	this.name = nm;
	this.size = sz;
	this.weight = wt;
	this.pretty = pr;
	this.next = nx;
    }

    public void print ()
    {
	System.out.print(this.name + " ");
    }

    public void printall ()
    {
	System.out.print(this.name + " ");
	System.out.print(this.size);
    }
}

public class Assemblyc {
   public String name;
   public Partc ptr;

// Begin machine-generated code ----------------------------------------------



// End machine-generated code   ----------------------------------------------

  public static void main(String[] args) { /* handwritten main for testing */
      Partc a, b, c, d, e, f; Assemblyc asm;

      f = new Partc("grommet", 7, 6.8, true,  null);
      e = new Partc("gadget",  2, 0.3, false, f);
      d = new Partc("widget",  1, 1.4, true,  e);
      c = new Partc("grommet", 5, 2.5, false, d);
      b = new Partc("gadget",  3, 2.7, false, c);
      a = new Partc("widget",  4, 3.1, true,  b);
      asm = new Assemblyc();
      asm.name = "fromulus";
      asm.ptr = a;
      System.out.print("name of assembly = ");
      System.out.println(asm.name);

      // call your generated code and print results here:
      //  System.out.print("gpfn1 = ");
      //  System.out.println(asm.gpfn1());

/* commented out, fix and uncomment if needed: alist
  while (alist != null)
      {
	  System.out.print("  " + alist.sortValue + " ");
	  System.out.println(alist.contents);
	  alist = alist.link;
      };
*/

/* commented out, fix and uncomment if needed: array of two-pointer queues
  for (i = 0 ; i < 6; i++)
      {
	  qitem = arrtpq[i].qstart;
	  while (qitem != null)
	      {
		  System.out.print("  " + qitem.contents + " ");
		  qitem = qitem.link;
	      };
	  System.out.println();
      };
*/
  } // main

/* commented out, fix the type and uncomment if needed: AVL tree
    public static void printAvl(Avltr2 tr, int n)
    {   int i;
	if (tr != null)
	    {
		for (i = 0; i < n; i++) System.out.print("  ");
		System.out.print(tr.sortValue);
		System.out.println(tr.contents);
		printAvl(tr.left, n + 1);
		printAvl(tr.right, n + 1);
	    }
    }
*/

}  // end of class Assemblyc

