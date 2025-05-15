class Solution {
    public boolean isPalindrome(int x) {
        String tmpStr = Integer.toString(x);
        String testStr = "";
        for (int i = tmpStr.length() - 1; i >= 0; i--) {
            testStr += tmpStr.charAt(i);
        }

        boolean result = (testStr.equals(tmpStr)) ? true : false;
        
        return result;
    }
}