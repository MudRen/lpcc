string get_root_uid()
{
    return "Root";
}

string author_file(string file)
{
    return file;
}

string get_bb_uid()
{
    return "Backbone";
}

string domain_file(string file)
{
    return file;
}

string creator_file(string file)
{
    return file;
}

void log_error(string file, string message)
{
    debug_message(sprintf("[----log_error----]\nfile = %s\nmessage = %s[----log_error----]", file, message));
}

void error_handler(mapping map, int flag)
{
    debug_message(sprintf("[----error_handler----]\nmap = %O\nflag = %d\n[----error_handler----]", map, flag));
}
