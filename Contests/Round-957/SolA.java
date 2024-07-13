import java.io.InputStream;
import java.io.InputStreamReader;
import java.io.BufferedReader;
import java.io.PrintWriter;
import java.util.Arrays;
import java.util.StringTokenizer;

public class SolA {
    public void solve(InputReader in, PrintWriter out) {
        int t = in.nextInt();
        while (t-- > 0) {
            String s1 = in.nextLine();
            int[] arr = in.convertStringToIntArray(s1);
            int a = arr[0], b = arr[1], c = arr[2];
            for(int i = 0; i < 5; i++) {
                if (a <= b  && a <= c) a++;
                else if (b <= a && b <= c) b++;
                else c++;
            }
            out.println(a * b * c);
        }
    }

    public static void main(String[] args) {
        InputReader in = new InputReader(System.in);
        PrintWriter out = new PrintWriter(System.out);

        SolA sln = new SolA();
        sln.solve(in, out);

        out.close();
    }

    private static class InputReader {
        BufferedReader reader;
        StringTokenizer tokenizer;

        public InputReader() {
            reader = new BufferedReader(new InputStreamReader(System.in));
        }

        public InputReader(InputStream in) {
            reader = new BufferedReader(new InputStreamReader(in));
        }

        public boolean hasMoreTokens() {
            while (tokenizer == null || !tokenizer.hasMoreTokens()) {
                String s = nextLine();
                if (s == null)
                    return false;
                tokenizer = new StringTokenizer(s);
            }
            return true;
        }

        public String nextToken() {
            return hasMoreTokens() ? tokenizer.nextToken() : null;
        }

        public int nextInt() {
            return Integer.parseInt(nextToken());
        }

        public long nextLong() {
            return Long.parseLong(nextToken());
        }

        public double nextDouble() {
            return Double.parseDouble(nextToken());
        }

        public int[] convertStringToIntArray(String s) {
            return Arrays.stream(s.split(" ")).mapToInt(Integer::parseInt).toArray();
        }

        public String nextLine() {
            try {
                tokenizer = null;
                return reader.readLine();
            } catch (Exception e) {
                e.printStackTrace();
                return null;
            }
        }
    }
}