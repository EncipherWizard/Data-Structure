import java.io.*;
import javax.servlet.*;
import javax.servlet.http.*;

// Extend HttpServlet class
public class HelloWorld extends HttpServlet {
 
   private String message;

   public void init() throws ServletException {
      System.out.println("Initialisation...");    	
      message = "Hello World";
   }

   public void doGet(HttpServletRequest request, HttpServletResponse response)
      throws ServletException, IOException {
      
      response.setContentType("text/html");
      PrintWriter out = response.getWriter();
      out.println("<h1>" + message + "</h1>");
   }

   public void doGet(HttpServletRequest request, HttpServletResponse response)
      throws ServletException, IOException {
   	doGet( request, response);   
   }	

   public void destroy() {
	System.out.println("Going out of scope");
   }
}
