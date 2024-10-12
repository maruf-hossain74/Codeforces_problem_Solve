fun main() {
    val t = readLine()!!.toInt()
    repeat(t) {
        val (x, y) = readLine()!!.split(" ").map { it.toLong() }
        var n = y / x
        var k = 0L

        while (n > 0) {
            k += n % 10
            n /= 10
        }

        k += y % x
        println(k)
    }
}
