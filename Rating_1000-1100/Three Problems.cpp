import java.util.*

fun main() {
    val t = 1
    repeat(t) {
        val scanner = Scanner(System.`in`)
        val n = scanner.nextInt()
        val v = IntArray(n)
        var mx = Long.MIN_VALUE
        var mn = Long.MAX_VALUE

        for (i in 0 until n) {
            v[i] = scanner.nextInt()
            mx = maxOf(mx, v[i].toLong())
            mn = minOf(mn, v[i].toLong())
        }

        var l = -1
        var m = -1
        var r = -1

        for (i in v.indices) {
            if (mx != v[i].toLong() && mn != v[i].toLong()) m = i + 1
            if (mx == v[i].toLong()) r = i + 1
            if (mn == v[i].toLong()) l = i + 1
        }

        if (m == -1) {
            println("-1 -1 -1")
        } else {
            println("$l $m $r")
        }
    }
}
