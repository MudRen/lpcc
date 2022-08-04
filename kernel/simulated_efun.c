void debug(mixed arg)
{
    debug_message(sprintf("\e[%dm%O\e[0m", 41 + random(6), arg));
}