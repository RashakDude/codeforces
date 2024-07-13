import java.io.BufferedReader;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.util.Arrays;
import java.util.StringTokenizer;

public class SolB {
    public void solve(InputReader in, PrintWriter out) {
        int t = in.nextInt();
        while (t-- > 0) {
            String s1 = in.nextLine();
            int[] arr = in.convertStringToIntArray(s1);
            int n = arr[0], k = arr[1];
            String s2 = in.nextLine();
            int[] arr2 = in.convertStringToIntArray(s2);
            int max = Integer.MIN_VALUE;
            int sum = 0;
            for (int i = 0; i < arr2.length; i++) {
                sum += arr2[i];
                max = Math.max(max, arr2[i]);
            }
            sum -= max;
            sum -= (k - 1);
            out.println(sum +  (n - max));
        }
    }

    public static void main(String[] args) {
        InputReader in = new InputReader(System.in);
        PrintWriter out = new PrintWriter(System.out);

        SolB sln = new SolB();
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
