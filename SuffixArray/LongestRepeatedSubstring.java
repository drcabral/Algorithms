/**
 * One application of the use of Suffix Arrays.
 * Longest Repeated Substring can be used for:
 *   . Are substantial identical fragments to be found within a given genome?
 *   . refactoring code, etc.
 * Based on https://algs4.cs.princeton.edu/63suffix/SuffixArraysBook.pdf
 * @author: github.com/myluco
 */
public class LongestRepeatedSubstring {
    public static String lrs(String text)
    {
        int n = text.length();
        SuffixArray sa = new SuffixArray(text);
        String lrs = "";
        for (int i = 1; i < n; i++)
        {
            int length = sa.lcp(i);
            if (length > lrs.length())
                lrs = text.substring(sa.index(i), sa.index(i) + length);
        }
        return lrs;
    }
    public static void main(String[] args)
    {
        String text = "it was the best of times it was the worst of times " +
            "it was the age of wisdom it was the age of foolishness " +
            "it was the epoch of belief it was the epoch of incredulity " +
            "it was the season of light it was the season of darkness " +
            "it was the spring of hope it was the winter of despair";
        String lrs = lrs(text);
        assert(lrs.equals("st of times it was the "));
        text = "aacaagtttacaagc";
        lrs = lrs(text);
        assert(lrs.equals("acaag"));
    }
}
