import java.util.Scanner
import kotlin.math.pow

fun power(num: Long, pow: Int): Long {
    var result: Long = 1
    var base = num
    var exponent = pow
    while (exponent > 0) {
        if (exponent and 1 == 1) {
            result = result * base
        }
        base *= base
        exponent = exponent shr 1
    }
    return result
}

fun main() {
    val scanner = Scanner(System.`in`)
    var t = 1 // Default number of test cases
    if (scanner.hasNextInt()) {
        t = scanner.nextInt()
    }

    repeat(t) {
        val n = scanner.nextLong()
        val k = scanner.nextLong()
        val kk = power(k, 3).plus(power(k, 2)).plus(k).plus(1)
        val nn = n.toDouble() / kk.toDouble()
        
        val a = nn.toLong()
        val b = (nn * k).toLong()
        val c = (nn * k * k).toLong()
        val d = (nn * k * k * k).toLong()
        
        println("$a $b $c $d")
    }
}
