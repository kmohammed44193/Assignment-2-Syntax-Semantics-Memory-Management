public class MemoryDemo {
    static class Student {
        private String name;
        Student(String name) {
            this.name = name;
        }
        public void display() {
            System.out.println("Student: " + name);
        }
    }
    public static void main(String[] args) {
        Student student1 = new Student("Mohammed");
        student1.display();
        student1 = null;
        System.gc();
        System.out.println("Garbage collection requested.");
        System.out.println("Program completed.");
    }
}
