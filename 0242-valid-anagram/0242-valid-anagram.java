class Solution {
    public boolean isAnagram(String s, String t) {
        if (s.length() != t.length()) {
            return false;
        }
        int[] count = new int[26];

        // 1. Corrected array reference and converted string to char array
        for (char ch : s.toCharArray()) {
            count[ch - 'a']++;
        }

        // 2. Corrected array reference and converted string to char array
        for (char ch : t.toCharArray()) {
            count[ch - 'a']--;
        }

        // 3. Final check to ensure all frequencies are zero
        for (int val : count) {
            if (val != 0) {
                return false;
            }
        }

        return true;
    }
}
