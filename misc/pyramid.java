class Pyramid {
    public static void main(String[] args) {
        int k=1;
        for(int i=1; i<=4; i++) {
            for(int j=4; j>i; j--)
                System.out.print(" ");
            for(int j=1; j<=k; j++)
                System.out.print("*");
            System.out.println();
            k+=2;
        } 
    }
}