import java.util.Arrays;

class Main {
public static void arrange (int[ ] Nums) {
int k = 0;
for (int i : Nums) {
if ( i != 0) {
Nums[k++] = i;
}
}
for ( int i = k; i< Nums.length; i++) {
Nums[i] = 0;
}
}
public static void main(String[ ] args) {
int [ ]  Nums = { 3, 0, 5, 2, 1, 0, 8, 0, 4};
arrange(Nums);
System.out.println(Arrays.toString(Nums));
}
}