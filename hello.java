public class hello{
    static{
        System.loadLibrary("hello");

    }
    private native void mathfunc();
    public static void main(String[] args){
        new hello().mathfunc();
    }
}