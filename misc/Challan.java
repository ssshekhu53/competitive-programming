package projChallan;

import java.io.*;
import java.sql.ResultSet;

import javax.servlet.*;

import javax.servlet.annotation.WebServlet;

import javax.servlet.http.*;

import java.sql.*;

@WebServlet("/servlet10")

public class Challan extends HttpServlet {

    public void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
        String Vehicle_Number=request.getParameter("Vehicle_Number");

        daoclass ob=new daoclass();
        ResultSet rs=null;
        try {
            rs = ob.getVehicleDetail(Vehicle_Number);

            String vehicleName, vechicleNumber;
            double challanAmount;

            // Write code to get vehicle name, number and challan amount from the result set and store them in respective variable
            // Then use forward method to send those values to the jsp page which you created in the morning. Take reference from google about forward method.
        }
        catch (Exception e) {
            e.printStackTrace();
        }
    }

}