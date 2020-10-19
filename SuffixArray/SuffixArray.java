import java.util.Arrays;
/**
 * Suffix Array is a data structure that is used in several string processing applications
 * Given a text, an array of suffixes are build.
 * Based on https://algs4.cs.princeton.edu/63suffix/SuffixArraysBook.pdf
 * @author: github.com/myluco
 */
public class SuffixArray {
    private Suffix[] suffixes;

    public SuffixArray(String text)
    {
        int n = text.length();
        suffixes = new Suffix[n];
        for (int i = 0; i < n; i++)
            suffixes[i] = new Suffix(text, i);
        Arrays.sort(suffixes);
    }
    public int index(int i) {
        return suffixes[i].index;
    }
    public int length() {
        return suffixes.length;
    }
    public String select(int i) {
        return suffixes[i].toString();
    }

    /**
     * length of longest common prefix of select(i) and select(i-1) ( i between 1 and N-1 )
     * @param i index in the suffix array
     * @return length of longest common prefix of select(i) and select(i-1)
     */
    public int lcp(int i) {
        return lcp(suffixes[i].toString(), suffixes[i-1].toString());
    }

    /**
     * Longest common prefix of two strings
     * @param s1 one string
     * @param s2 the other string
     * @return the length of the longest prefix between s1 and s2
     */
    private int lcp(String s1, String s2) {
        int N = Math.min(s1.length(), s2.length());
        for (int i = 0; i < N; i++) {
            if (s1.charAt(i) != s2.charAt(i)) return i;
        }
        return N;
    }
    public String toString(){
        return Arrays.toString(suffixes);
    }
    private static class Suffix implements Comparable<Suffix> {
        private final String text;
        private final int index;
        private Suffix(String text, int index)
        {
            this.text = text;
            this.index = index;
        }
        private int length() {
            return text.length() - index;
        }
        private char charAt(int i) {
            return text.charAt(index + i);
        }
        public String toString() {
            return text.substring(index);
        }
        public int compareTo(Suffix that){
            if (this == that) return 0;
            int n = Math.min(this.length(), that.length());
            for (int i = 0; i < n; i++)
            {
                if (this.charAt(i) < that.charAt(i)) return -1;
                if (this.charAt(i) > that.charAt(i)) return +1;
            }
            return this.length() - that.length();
        }
    }
    public static void main(String[] args)
    {
        String text = "aacaagtttacaagc";
        SuffixArray sa = new SuffixArray(text);
        assert(sa.length() == text.length());
        assert(sa.select(00).equals("a"));
        assert(sa.select(sa.length()-1).equals("tttacaagc"));
        System.out.println(sa);
    }
}
