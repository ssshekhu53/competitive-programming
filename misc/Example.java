import java.util.Scanner; 

class Person {
    protected String name;

    public Person() {
        this.name="";
    }

    public Person(String name) {
        this.name=name;
    }

    public void setName(String name) {
        this.name=name;
    }

    public String getName() {
        return this.name;
    }
}

class Employee extends Person {
    protected double annualSalary;
    protected int startingYear;
    protected String nationalInsuranceNumber;

    public Employee() {
        super();
        this.annualSalary=0.0;
        this.startingYear=0;
        this.nationalInsuranceNumber=NULL;
    }

    public Employee(String name, double annualSalary, int startingYear, String nationalInsuranceNumber) {
        super(name);
        this.annualSalary=annualSalary;
        this.startingYear=startingYear;
        this.nationalInsuranceNumber=nationalInsuranceNumber;
    }

    public void setAnnualSalary(double annualSalary) {
        this.annualSalary=annualSalary;
    }

    public void setStartingYear(int startingYear) {
        this.startingYear=startingYear;
    }

    public void setNationalInsuranceNumber(String nationalInsuranceNumber) {
        this.nationalInsuranceNumber=nationalInsuranceNumber;
    }

    public double getAnnualSalary() {
        return this.annualSalary;
    }

    public int getStartingYear() {
        return this.startingYear;
    }

    public String getNationalInsuranceNumber() {
        return this.nationalInsuranceNumber;
    }
}

class TestPatient {
    public static void main(String[] args) {
        Scanner scan=new Scanner(System.in);
        Patient patient;

        String patientName;
        double height, weight;

        System.out.print("Name of Patient : ");
        patientName=scan.nextLine();

        System.out.print("Height of Patient : ");
        height=scan.nextDouble();

        System.out.print("Weight of Patient : ");
        weight=scan.nextDouble();

        patient=new Patient(patientName, height, weight);

        System.out.println("BMI of patient : "+patient.computeBMI());
    }
}


int removeObstacle(int numRows, int numColumns, List<List<Integer>> lot){
             int[][] matrix = new int[numRows][numColumns];
             boolean[][]visited = new boolean[numRows][numColumns];
             int result = 0;
            int[][]dirs = new int[][]{{1,0}, {-1,0}, {0,1}, {0,-1}};
            Queue<int[]> queue = new LinkedList<>();
             Robot starts from top-left {0,0}
            queue.offer(new int[]{0,0});
            
            /*
               PART1: convert List<List<Integer>> lot -> matrix 2D grid
            */
            for (int i = 0; i < lot.size() ; i++) {
                List<Integer> sub = lot.get(i);
                for (int j = 0; j < sub.size() ; j++) {
                    matrix[i][j] = lot.get(i).get(j);
               }
           }
   /*26           PART2: bfs
   27*/while(!queue.isEmpty()){
   int size = queue.size();
   for (int i = 0; i < size; i++) {
   int[] curr = queue.poll();
   int x = curr[0];
   int           
            
              
                                                                                          y = curr[1];
                   if( x < 0 || y < 0 || x >=numRows || y >=numColumns || matrix[x][y] == 0 || visited[x][y]){
                     continue;
                 }
                 visited[x][y] = true;
                 if(matrix[x][y] == 9 ){
                     return result;
                 }
                 for(int[] dir : dirs){
                     int x_ = dir[0] + x;
                     int y_ = dir[1] + y;
                     queue.offer(new int[]{x_, y_});
                 }
             }             result++;         }
                      return -1;
                         }
   